/*
* Project Name : Problem-12789
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-12789
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
	int N, target = 1, num, sz = 0;
	stack<int> s;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		if (num == target)
		{
			target++;
			continue;
		}
		else if (num != target)
		{
			while(s.empty() == false && s.top() == target)
			{
				s.pop();
				target++;
			}
			s.push(num);
		}
	}
	sz = s.size();
	for (int i = 0; i < sz; i++)
	{
		if (s.top() != target)
		{
			cout << "Sad";
			return 0;
		}
		else
		{	
			s.pop();
			target++;
		}
	}
	cout << "Nice";
	return 0;
}