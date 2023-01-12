/*
* Project Name : Problem-11051
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11051
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

long long DP[1001][1001];
int main(void)
{
    int N, K;
    cin >> N >> K;

	DP[0][0] = 1;
	DP[1][0] = 1;
	DP[1][1] = 1;

	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
				DP[i][0] = 1;
			else if (j == i)
				DP[i][j] = 1;
			else
				DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]) % 10007;
		}
	}
	cout << DP[N][K];

    return 0;
}