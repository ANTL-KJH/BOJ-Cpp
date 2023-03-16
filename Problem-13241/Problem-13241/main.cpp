/*
* Project Name : Problem-13241
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-13241
* Program First Author : JH KIM
* Date of First Write : 2023.03.15
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.03.15			v1.0			First Write
*/

#include <iostream>
using namespace std;


long long gcd(long long a, long long b)
{
	if (a % b == 0)			// a가 b의 배수이면 종료
		return b;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
	return a * b / gcd(a, b);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long A, B;
	cin >> A >> B;

	cout << lcm(A, B);
	return 0;
}