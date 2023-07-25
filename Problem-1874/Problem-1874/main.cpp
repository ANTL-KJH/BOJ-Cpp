/*
* Project Name : Problem-1874
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1874
* Program First Author : JH KIM
* Date of First Write : 2023.07.18
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.19			v1.00			First Write
* JH KIM				2023.07.21			v1.01			add result
*/

#include <iostream>
#include <stack>
using namespace std;



int main(void)
{
	int n = 0, stack_cnt = 1, cnt = 0;
	int* sequence;
	string result;
	stack<int> s;
	cin >> n;
	sequence = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cin >> sequence[i];
	}
	while (1)
	{
		if (s.size() != 0 && s.top() == sequence[cnt])
		{
			s.pop();
			result += "-";
			//cout << "-" << "\n";
			cnt++;
		}
		else if (stack_cnt <= n)
		{
			s.push(stack_cnt);
			result += "+";
			//cout << "+" << "\n";
			stack_cnt++;
		}
		else
		{
			if (s.size() == 0)
			{
				for (int i = 0; i < result.size(); i++)
				{
					cout << result[i] << "\n";
				}
				break;
			}
			else
			{
				cout << "NO";
				break;
			}
		}
	}
	return 0;
}