/*
* Project Name : Problem-3036
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-3036
* Program First Author : JH KIM
* Date of First Write : 2023.01.11
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.11			v1.0			First Write
*/
#include <iostream>
using namespace std;

int gcd(int a, int b)	// greatest common divisor
{
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int loop, * radius, gcd_result;
	cin >> loop;
	radius = new int[loop];
	for (int i = 0; i < loop; i++)
	{
		cin >> radius[i];
	}
	for (int i = 1; i < loop; i++)
	{
		gcd_result = gcd(radius[0], radius[i]);
		cout << radius[0] / gcd_result << "/" << radius[i] / gcd_result << "\n";
	}
	return 0;
}