/*
* Project Name : Problem-10866
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10866
* Program First Author : JH KIM
* Date of First Write : 2023.07.27
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.27			v1.00			First Write
*/

#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, num;
	string str;
	deque<int> dq;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push_back")
		{
			cin >> num;
			dq.push_back(num);
		}
		else if (str == "push_front")
		{
			cin >> num;
			dq.push_front(num);
		}
		else if (str == "front")
		{
			if (dq.size() == 0)
				cout << -1 << "\n";
			else
				cout << dq.front() << "\n";
		}
		else if (str == "back")
		{
			if (dq.size() == 0)
				cout << -1 << "\n";
			else
				cout << dq.back() << "\n";
		}
		else if (str == "size")
		{
			cout << dq.size() << "\n";
		}
		else if (str == "empty")
		{
			if (dq.size() != 0)
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
		}
		else if (str == "pop_front")
		{
			if (dq.size() != 0)
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
				cout << -1 << "\n";
		}
		else if (str == "pop_back")
		{
			if (dq.size() != 0)
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
				cout << -1 << "\n";
		}
	}
	return 0;
}