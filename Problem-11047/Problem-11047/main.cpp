/*
* Project Name : Problem-11047
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11047
* Program First Author : JH KIM
* Date of First Write : 2023.02.27
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.27			v1.0			First Write
*/

#include <iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K, * coin, sum = 0;
	cin >> N >> K;
	coin = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> coin[i];
	}
	for (int i = N - 1; i >= 0; i--)
	{
		sum += K / coin[i];
		K = K % coin[i];
	}
	
	cout << sum;

	delete[] coin;
	return 0;
}