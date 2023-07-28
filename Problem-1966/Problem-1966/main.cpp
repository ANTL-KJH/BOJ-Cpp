/*
* Project Name : Problem-18258
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-18258
* Program First Author : JH KIM
* Date of First Write : 2023.07.26
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.26			v1.00			First Write
*/
#include <iostream>
#include <queue>
using namespace std;



int main(void)
{
	int T, N, M,num, target;
	pair<int, bool> tmp;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		priority_queue<int> priQ;
		queue<pair<int,bool>> q;
		cin >> N >> M;
		for (int p = 0; p < N; p++)
		{
			cin >> num;
			priQ.push(num);
			if (p == M)
				q.push(make_pair(num, true));
			else
				q.push(make_pair(num, false));
		}
		for (int o = 1;  o<= N; o++)
		{
			while (priQ.top() != q.front().first)
			{
				q.push(q.front());
				q.pop();
			}
			if (q.front().second == true)
			{
				cout << o << "\n";
				break;
			}
			else
			{
				priQ.pop();
				q.pop();
			}
		}
	}
	return 0;
}