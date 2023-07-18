/*
* Project Name : Problem-4949
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-4949
* Program First Author : JH KIM
* Date of First Write : 2023.07.17
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.17			v1.00			First Write
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	string str;
	int bracket=0, squareBracket=0;
	while (true)
	{
		getline(cin, str);
		if (str == ".")
			break;

		stack<char> s;
		bool flag = 0;
		for (int i = 0; i < str.length(); i++)
		{
			if ((str[i] == '('))
			{
				s.push(str[i]);
				bracket++;
			}
			else if (str[i] == '[')
			{
				s.push(str[i]);
				squareBracket++;
			}
			else if (str[i] == ')')
			{
				if (!s.empty() && s.top() == '(')
				{
					s.pop();
					bracket--;
				}
				else
				{
					bracket = -1;
					break;
				}
				
			}
			else if (str[i] == ']')
			{
				if (!s.empty() && s.top() == '[')
				{
					s.pop();
					squareBracket--;
				}
				else
				{
					squareBracket = -1;
					break;
				}
				
			}
		}

		if (bracket ==0 && squareBracket == 0 && s.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		bracket = 0, squareBracket = 0;
	}
	return 0;
}
