/*
* Project Name : Problem-10812
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10812
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.22			v1.0			First Write
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, i, k, j;
	int* arr;
	
	cin >> N >> M;
	arr = new int[N + 1];
	for (int p = 0; p <= N; p++)
		arr[p] = p;

	for (int p = 0; p < M; p++)
	{
		cin >> i >> k >> j;
		rotate(arr + i, arr + j, arr + k+1);		// rotate(start, mid, end+1), mid가 start가 되는 형태로 rotate 
	}
	for (int i = 1; i <= N; i++)
		cout << arr[i] << " ";

	delete[] arr;

	return 0;
}