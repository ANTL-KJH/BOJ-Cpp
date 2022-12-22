/*
* Project Name : Problem-1330
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1330
* Program First Author : JH KIM
* Date of First Write : 2022.12.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.22			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << ">";
	else if (a < b)
		cout << "<";
	else
		cout << "==";
	return 0;
}