/*
* Project Name : Problem-28278
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-28278
* Program First Author : JH KIM
* Date of First Write : 2023.08.07
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.07			v1.00			First Write
*/

#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, input, num;
	cin >> N;
	stack<int> s;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		if (input == 1)
		{
			cin >> num;
			s.push(num);
		}
		else if (input == 2)
		{
			if (s.size() == 0)	// size check
				cout << -1 << "\n";
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (input == 3)
			cout << s.size() << "\n";
		else if (input == 4)
		{
			if (s.size() == 0)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (input == 5)
		{
			if (s.size() == 0)
				cout << -1 << "\n";
			else
				cout << s.top() << "\n";
		}
	}
	return 0;
}