/*
* Project Name : Problem-2579
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2579
* Program First Author : JH KIM
* Date of First Write : 2023.01.20
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.20			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int stair, * stair_data, * dp;
    cin >> stair;
    stair_data = new int[stair];
    dp = new int[stair];

    for (int i = 0; i < stair; i++)
    {
        cin >> stair_data[i];
    }

    // initialize
    dp[0] = stair_data[0];
    dp[1] = stair_data[0] + stair_data[1];
    dp[2] = max(stair_data[0] + stair_data[2], stair_data[1] + stair_data[2]);

    for (int i = 3; i < stair; i++)
    {
        dp[i] = max(dp[i - 2] + stair_data[i], dp[i - 3] + stair_data[i - 1] + stair_data[i]);
    }
    cout << dp[stair-1];
    delete[] stair_data;
    delete[] dp;

    return 0;
}