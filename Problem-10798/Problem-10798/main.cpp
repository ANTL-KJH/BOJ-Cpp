/*
* Project Name : Problem-10798
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10798
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.22			v1.0			First Write
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str[5];
	int maxLen = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> str[i];
		if (str[i].length() > maxLen)
			maxLen = str[i].length();
	}
	
	for (int i = 0; i < maxLen; i++)
	{
		for (int p = 0; p < 5; p++)
		{
			if (str[p].length() > i)
				cout << str[p][i];
		}
	}
	return 0;
}