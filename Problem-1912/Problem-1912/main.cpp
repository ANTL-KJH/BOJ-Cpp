/*
* Project Name : Problem-1912
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1912
* Program First Author : JH KIM
* Date of First Write : 2023.01.19
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.19			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, result, *n_array, * dp;
    cin >> n;
    n_array = new int[n];
    dp = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> n_array[i];
    }
    dp[0] = n_array[0];
    result = dp[0];
    for (int i = 1; i < n; i++)
    {
        if (dp[i - 1] + n_array[i] > n_array[i])
            dp[i] = dp[i - 1] + n_array[i];
        else
            dp[i] = n_array[i];
        if (result < dp[i])
            result = dp[i];
    }
    cout << result;

    delete[] n_array;
    delete[] dp;

    return 0;
}