/*
* Project Name : Problem-1008
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1008
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
	double c;
	cin >> a >> b;
	c = (double)a / (double)b;
	cout << fixed;
	cout.precision(20);
	cout << c;
	return 0;
}