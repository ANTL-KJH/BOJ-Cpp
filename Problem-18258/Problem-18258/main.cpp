/*
* Project Name : Problem-18258
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-18258
* Program First Author : JH KIM
* Date of First Write : 2023.07.18
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.21			v1.00			First Write
* JH KIM				2023.07.21			v1.01			add sync_with_stdio
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	cout.sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> q;
	int N, num;
	cin >> N;
	string str;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (str == "pop")
		{
			if (q.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				num = q.front();
				q.pop();
				cout << num << "\n";
			}
		}
		else if (str == "size")
		{
			cout << q.size() << "\n";
		}
		else if (str == "empty")
		{
			if (q.size() == 0)
			{
				cout << 1 << "\n";
			}
			else
				cout << 0 << "\n";
		}
		else if (str == "front")
		{
			if (q.size() == 0)
				cout << -1 << "\n";
			else
			{
				num = q.front();
				cout << num << "\n";
			}
		}
		else if (str == "back")
		{
			if (q.size() == 0)
				cout << -1 << "\n";
			else
			{
				num = q.back();
				cout << num << "\n";
			}

		}
	}
	return 0;
}