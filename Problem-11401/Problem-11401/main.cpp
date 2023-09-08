/**
* Project Name : Problem-11401
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11401
* Program First Author : JH KIM
* Date of First Write : 2023.09.06
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.09.06			v1.00			First Write
*/
#include <iostream>
#define MOD 1000000007
using namespace std;



long long solve(long long denominator, int x)
{
	long long half;
	if (x == 0)
		return 1;

	if (x % 2 == 1)
		return denominator * solve(denominator, x - 1) % MOD;
	else
	{
		half = solve(denominator, x / 2);
		return half * half % MOD;
	}
}

int main()
{
	int N, K;
	long long numerator, denominator;
	cin >> N >> K;
	numerator = 1;
	for (int i = N; i >= N - K + 1; i--)
		numerator = (numerator * i) % MOD;


	denominator = 1;
	for (int i = 1; i <= K; i++)
		denominator = (denominator * i) % MOD;


	denominator = solve(denominator, MOD - 2);

	cout << numerator * denominator % MOD;

}