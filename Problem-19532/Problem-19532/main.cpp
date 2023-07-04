/*
* Project Name : Problem-19532
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-19532
* Program First Author : JH KIM
* Date of First Write : 2023.06.28
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.28			v1.0			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	for (int x = -999; x < 1000; x++)
	{
		for (int y = -999; y < 1000; y++)
		{
			if ((a * x + b * y == c) && (d * x + e * y == f))
			{
				cout << x << " " << y;
				return 0;
			}
		}
	}

	return 0;
}