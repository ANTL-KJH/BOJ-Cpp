/*
* Project Name : Problem-27866
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-27866
* Program First Author : JH KIM
* Date of First Write : 2023.03.10
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.03.10			v1.0			First Write
*/

#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string S;
	int i;
	cin >> S;
	cin >> i;
	cout << S[i-1];

	return 0;
}