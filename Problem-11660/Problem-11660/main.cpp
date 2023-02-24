/*
* Project Name : Problem-11660
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11660
* Program First Author : JH KIM
* Date of First Write : 2023.02.23
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.23			v1.0			First Write
*/

#include <iostream>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, x1, y1, x2, y2, ans = 0;
	int** arr, ** dp;

	cin >> N >> M;
	arr = new int* [N+1];
	dp = new int* [N+1];
	for (int i = 0; i < N + 1; i++)
	{
		arr[i] = new int[N+1];
		dp[i] = new int[N + 1];
	}
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		ans = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
		cout << ans << '\n';
	}
	return 0;
}