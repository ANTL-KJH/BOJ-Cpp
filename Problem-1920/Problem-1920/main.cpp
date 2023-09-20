/**
* Project Name : Problem-1920
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1920
* Program First Author : JH KIM
* Date of First Write : 2023.09.14
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.09.14			v1.00			First Write
*/

#include <iostream>
#include <algorithm>
using namespace std;

void binarySearch(int left, int right, int target, int* arr)
{
	int mid = 0;
	while (right >= left)
	{
		mid = (left + right) / 2;
		if (arr[mid] == target) {
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] > target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << 0 << "\n";
	return;
}

int main(void)
{
	int N, M;
	int* N_arr, * M_arr;

	cin >> N;
	N_arr = (int*)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++)
	{
		cin >> N_arr[i];
	}
	sort(N_arr, N_arr + N);

	cin >> M;
	M_arr = (int*)calloc(M, sizeof(int));
	for (int i = 0; i < M; i++)
	{
		cin >> M_arr[i];
	}
	for (int i = 0; i < M; i++)
	{
		binarySearch(0, N - 1, M_arr[i], N_arr);
	}
	free(N_arr);
	return 0;
}