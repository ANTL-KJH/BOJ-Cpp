/*
* Project Name : Problem-10810
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10810
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.22			v1.0			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, i, j, k;
	int* arr;
	cin >> N >> M;
	arr = new int[N] {};
	for (int p = 0; p < M; p++)
	{
		cin >> i >> j >> k;
		for (int q = i - 1; q < j; q++)
			arr[q] = k;
	}
	for (int p = 0; p < N; p++)
	{
		cout << arr[p] << " ";
	}
	delete[] arr;
	return 0;
}