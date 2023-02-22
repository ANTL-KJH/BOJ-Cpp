/*
* Project Name : Problem-10811
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10811
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

	int N, M, i, j, temp;
	int* arr;


	cin >> N >> M;
	arr = new int[N + 1];
	for (int p = 1; p <= N; p++)
		arr[p] = p;
	for (int p = 0; p < M; p++)
	{
		cin >> i >> j;
		reverse(arr+i, arr+j+1);
	}
	for (int p = 1; p <= N; p++)
	{
		cout << arr[p] << " ";
	}
	delete[] arr;
	return 0;
}