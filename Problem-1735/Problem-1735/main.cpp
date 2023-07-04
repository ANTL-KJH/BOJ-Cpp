/*
* Project Name : Problem-1735
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1735
* Program First Author : JH KIM
* Date of First Write : 2023.06.29
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.29			v1.0			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, numerator, denominator;
	cin >> a >> b;
	cin >> c >> d;
	numerator = a * d + b * c;	// 기약분수로 만들기 전 분자
	denominator = b * d;		// 기약분수로 만들기 전 분모
	int m = max(b, d);
	for (int i = 2; i <= m; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			numerator /= i;
			denominator /= i;
			i--;
		}
	}
	cout << numerator << " " << denominator;
	return 0;
}