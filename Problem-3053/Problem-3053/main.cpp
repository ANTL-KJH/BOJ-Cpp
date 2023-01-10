/*
* Project Name : Problem-3053
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-3053
* Program First Author : JH KIM
* Date of First Write : 2023.01.10
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.10			v1.0			First Write
*/
#include <iostream>
using namespace std;
#define PI 3.1415926535897932

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int radius;
	cin >> radius;
	cout << fixed;
	cout.precision(6);
	cout << radius * radius * PI << "\n" << 2.0 * radius * radius << "\n";
	return 0;
}