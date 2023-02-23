/*
* Project Name : Problem-10988
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10988
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
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

	string str;
	cin >> str;
	for (int i = 0; i < str.length() / 2; i++)
		if (str[i] != str[str.length() - i - 1])
		{
			cout << 0;
			return 0;
		}
	cout << 1;
	return 0;
}