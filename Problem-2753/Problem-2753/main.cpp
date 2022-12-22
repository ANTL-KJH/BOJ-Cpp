/*
* Project Name : Problem-2753
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2753
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
	int year;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
		cout << 1;
	else
		cout << 0;
	return 0;
}