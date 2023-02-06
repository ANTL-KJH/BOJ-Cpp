/*
* Project Name : Problem-12865
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-12865
* Program First Author : JH KIM
* Date of First Write : 2023.02.03
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.03			v1.0			First Write
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);  
	cout.tie(0);

	int N, K;
	int* weight, * value;
	int** dp;

	cin >> N >> K;

	weight = new int[N + 1];
	value = new int[N + 1];
	dp = new int* [N + 1];
	for (int i = 0; i < N + 1; i++)
		dp[i] = new int[K + 1] {};

	for (int i = 1; i <= N; i++)
		cin >> weight[i] >> value[i];


	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			if (j - weight[i] >= 0)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	//	1  2  3  4  5  6  7 -> 가방 크기
	//1 0  0  0  0  0 13 13		
	//2 0  0  0  8  8 13 13		
	//3 0  0  6  8  8 13 13
	//4 0  0  6  8 12 13 14
	cout << dp[N][K];

	delete[] weight;
	delete[] value;
	for (int i = 0; i < N + 1; i++)
		delete[] dp[i];
	delete[] dp;

	return 0;
}