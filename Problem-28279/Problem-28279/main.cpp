/*
* Project Name : Problem-28279
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-28279
* Program First Author : JH KIM
* Date of First Write : 2023.08.07
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.07			v1.00			First Write
*/

#include <iostream>
#include <deque>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, menu, num;
	deque<int> dq;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> menu;
		if (menu == 1)
		{
			cin >> num;
			dq.push_front(num);
		}
		else if (menu == 2)
		{
			cin >> num;
			dq.push_back(num);
		}
		else if (menu == 3)
		{
			if (dq.size() != 0)
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
				cout << -1 << "\n";
		}
		else if (menu == 4)
		{
			if (dq.size() != 0)
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
				cout << -1 << "\n";
		}
		else if (menu == 5)
		{
			cout << dq.size() << "\n";
		}
		else if (menu == 6)
		{
			cout << dq.empty() << "\n";
		}
		else if (menu == 7)
		{
			if (dq.size() != 0)
				cout << dq.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (menu == 8)
		{
			if (dq.size() != 0)
				cout << dq.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}
}