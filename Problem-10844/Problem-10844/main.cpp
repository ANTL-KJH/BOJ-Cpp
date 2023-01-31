/*
* Project Name : Problem-10844
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10844
* Program First Author : JH KIM
* Date of First Write : 2023.01.30
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.30			v1.0			First Write
*/
#include <iostream>
using namespace std;

#define mod 1000000000

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int N, ** dp;
	cin >> N;
    dp = new int* [N + 1];
    for (int i = 0; i < N + 1; i++)
        dp[i] = new int[10] {};
    
    for (int i = 1; i < 10; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
                dp[i][0] = dp[i - 1][j + 1];
            else if (j == 9)
                dp[i][9] = dp[i - 1][j - 1];
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

            dp[i][j] %= mod;
        }
    }

    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        result = (result + dp[N][i]) % mod;
    }
    cout << result << "\n";

    for (int i = 0; i < N + 1; i++)
        delete[] dp[i];
    delete[] dp;
	return 0;
}