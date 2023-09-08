/*
* Project Name : Problem-1629
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1629
* Program First Author : JH KIM
* Date of First Write : 2023.08.24
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.24			v1.00			First Write
*/
#include <iostream>
using namespace std;

long long power(long long a, long long b, long long c)
{
	long long r;
	if (b == 0)
		return 1;
	else if (b == 1)
		return a % c;
	else
	{
		r = power(a, b / 2, c) % c;
		if (b % 2 == 0)
			return r * r % c;
		else
			return r * r % c * a % c;
	}
}

int main(void)
{
	long long a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	cout << power(a, b, c);
	return 0;
}