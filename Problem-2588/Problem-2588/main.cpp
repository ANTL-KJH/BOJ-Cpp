/*
* Project Name : Problem-2588
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2588
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
	cout << a * (b % 10)<< endl;
	cout << a * (b % 100 - (b % 10)) / 10 << endl;
	cout << a * (b - (b % 100)) / 100 << endl;
	cout << a * b;
	return 0;
}