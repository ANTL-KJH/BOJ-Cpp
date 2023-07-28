/*
* Project Name : Problem-10828
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10828
* Program First Author : JH KIM
* Date of First Write : 2023.07.28
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.28			v1.00			First Write
*/

#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	int N, M, num, result=0;
	cin >> N >> M;
	deque<int>dq;

	for (int i = 1; i <= N; i++)
		dq.push_back(i);

	for (int i = 0; i < M; i++)
	{
		cin >> num;
		int pos;
		for (int p = 0; p < dq.size(); p++)
			if (dq[p] == num)
				pos = p;
		if (pos <= dq.size() - pos)
		{
			result += pos;
			for (int o = 0; o < pos; o++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
			dq.pop_front();
		}
		else
		{

			result += dq.size() - pos;
			for (int o = 0; o < dq.size() - pos; o++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
			dq.pop_front();
		}
	}
	cout << result;
	return 0;
}