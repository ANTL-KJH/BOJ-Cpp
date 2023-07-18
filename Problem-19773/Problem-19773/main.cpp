/*
* Project Name : Problem-10773
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10773
* Program First Author : JH KIM
* Date of First Write : 2023.07.13
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.13			v1.00			First Write
*/
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;
	int K, num, cnt=0, sum=0;
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> num;
		if (num == 0)
		{
			s.pop();
			cnt--;
		}
		else
		{
			s.push(num);
			cnt++;
		}
	}
	for (int i = 0; i < cnt; i++)
	{
		sum += s.top();
		s.pop();
	}
	cout << sum;
	return 0;
}