/*
* Project Name : Problem-9086
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9086
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
	
	int T;
	string str;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		cin >> str;
		cout << str[0] << str[str.length() - 1] << "\n";
	}
	
	return 0;
}