/*
* Project Name : Problem-2565
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2565
* Program First Author : JH KIM
* Date of First Write : 2023.02.01
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.01			v1.0			First Write
* JH KIM				2023.02.02			v1.1			Algorithm Modified
*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<int, int> m;
	int n, * idx, * dp, index, value, max_arithmetic = 0;
	cin >> n;

	idx = new int[n] {};
	dp = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		cin >> index >> value;
		idx[i] = index;					// 입력받은 A index를 저장
		m.insert({ index, value });		// index에 맞춰 value 입력
	}
	sort(idx, idx + n);					// index 정렬

	for (int i = 0; i < n; i++)			// 정렬된 index를 기반으로 필요한 위치에만 접근
	{
 		for (int q = 0; q < i; q++)
		{
			if (m[idx[i]] > m[idx[q]])
			{
				dp[i] = max(dp[i], dp[q] + 1);
				if (dp[i] > max_arithmetic)
					max_arithmetic = dp[i];
			}
		}
	}

	cout << n - (max_arithmetic + 1);

	delete[] idx;
	delete[] dp;

	return 0;
}