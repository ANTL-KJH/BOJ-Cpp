/*
* Project Name : Problem-2559
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2559
* Program First Author : JH KIM
* Date of First Write : 2023.02.06
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.06			v1.0			First Write
*/
#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K, result=INT_MIN;
	int* num_arr, * dp;
	cin >> N >> K;
	num_arr = new int[N + 1] {};
	dp = new int[N + 1] {};
	for (int i = 1; i <= N; i++)
	{
		cin >> num_arr[i];
		dp[i] = dp[i - 1] + num_arr[i];
		if(i > K - 1)
			result = max(result, dp[i]-dp[i-K]);
	}

	cout << result;
	return 0;
}