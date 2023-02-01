/*
* Project Name : Problem-11054
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11054
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

	int N, * arr, * dp_L, *dp_R, max_value = 0;
	cin >> N;
	arr = new int[N] {};
	dp_L = new int[N] {};
	dp_R = new int[N] {};

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N; i++)
	{
		dp_L[i] = 0;
		dp_R[i] = 0;
	}


	for (int i = 0; i < N; i++)
	{
		for (int p = 0; p < i; p++)
		{
			if (arr[i] > arr[p])
				dp_L[i] = max(dp_L[i], dp_L[p] + 1);
		} 
	}

	for (int i = N - 1; i >= 0; i--)
	{
		for (int q = N - 1; q > i; q--)
		{
			if (arr[i] > arr[q])
				dp_R[i] = max(dp_R[i], dp_R[q] + 1);
		}
	}
	for (int i = 0; i < N; i++)
	{
		if ((dp_L[i] + dp_R[i]) > max_value)
			max_value = dp_L[i] + dp_R[i];
	}
	cout << max_value + 1;
	return 0;
}