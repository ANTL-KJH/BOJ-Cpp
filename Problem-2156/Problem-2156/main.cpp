/*
* Project Name : Problem-2156
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2156
* Program First Author : JH KIM
* Date of First Write : 2023.01.30
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.30			v1.0			First Write
* JH KIM				2023.01.31			v1.1			Algorithm modified
*/
#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, * wine, * dp, max_value = 0;
    cin >> n;
     
    wine = new int[n+1];
    dp = new int[n+1];
	for (int i = 1; i <= n; i++)
		cin >> wine[i];


	for (int i = 1; i < 3 && i <= n; i++)
	{
		if (i == 1)
			dp[i] = wine[i];
		else
			dp[i] = wine[i] + wine[i - 1];
	}

	for (int i = 3; i <= n; i++)
	{
		dp[i] = std::max(dp[i - 3] + wine[i] + wine[i - 1], dp[i - 2] + wine[i]);
		dp[i] = std::max(dp[i - 1], dp[i]);
	}

	cout << dp[n];
    delete[] wine;
    delete[] dp;

    return 0;
}