/*
* Project Name : Problem-11053
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11053
* Program First Author : JH KIM
* Date of First Write : 2023.01.31
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.31			v1.0			First Write
*/
#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int len, * arr, * dp;
	cin >> len;
	arr = new int[len];
	dp = new int[len];
	dp[0] = 1;

	for (int i = 0; i < len; i++)
		cin >> arr[i];
	for (int i = 0; i < len; i++)
		dp[i] = 1;

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}        
	sort(dp, dp + len);
	cout << dp[len-1];
	return 0;
}