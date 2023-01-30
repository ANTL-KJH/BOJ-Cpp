/*
* Project Name : Problem-1463
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1463
* Program First Author : JH KIM
* Date of First Write : 2023.01.30
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.30			v1.0			First Write
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int N, count = 0;
	cin >> N;
	vector<int> dp(N + 1);
	
	dp[1] = 0;
	for (int i = 2; i <= N; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (!(i % 3))		// 3의 배수인 경우
			dp[i] = min(dp[i], dp[i / 3] + 1);
		if (!(i % 2))		// 2의 배수인 경우
			dp[i] = min(dp[i], dp[i / 2] + 1);
	}	
	cout << dp[N] << endl;

	return 0;
}