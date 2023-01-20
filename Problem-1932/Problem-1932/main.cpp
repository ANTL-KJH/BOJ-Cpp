/*
* Project Name : Problem-1932
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1932
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

    int n;
    int** n_tri, ** dp;
    cin >> n;
    n_tri = new int* [n];
    dp= new int* [n];
    for (int i = 0; i < n; i++)
    {
        n_tri[i] = new int[n] ();
        dp[i] = new int[n] ();
    }

    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p <= i; p++)
        {
            cin >> n_tri[i][p];
        }
    } 

    dp[0][0] = n_tri[0][0];
    for (int i = 1; i < n; i++)
    {
        for (int p = 0; p <= i; p++)
        { 
            if (p >= 1)
                dp[i][p] = max(dp[i - 1][p - 1], dp[i - 1][p]) + n_tri[i][p];
            else
                dp[i][p] = dp[i - 1][p] + n_tri[i][p];
        }
    }               
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[n - 1][i] > max)
            max = dp[n - 1][i];
    }
    cout << max;

    for (int i = 0; i < n; i++)
    {
        delete[] n_tri[i];
        delete[] dp[i];
    }
    delete[] n_tri;
    delete[] dp;
    return 0;
}