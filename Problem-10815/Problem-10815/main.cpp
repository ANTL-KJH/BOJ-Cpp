/*
* Project Name : Problem-10815
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10815
* Program First Author : JH KIM
* Date of First Write : 2023.01.05
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.05			v1.0			First Write
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, * card_array, * num_array, * check_array;
	cin >> n;
	card_array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> card_array[i];
	}
	sort(card_array, card_array + n);
	cin >> m;
	num_array = new int[m];
	check_array = (int*)calloc(sizeof(int), m);
	for (int i = 0; i < m; i++)
	{
		cin >> num_array[i];
	}
	for (int i = 0; i < m; i++)
	{
		int right = n - 1;
		int left = 0;
		while (left <= right)
		{
			int mid = (right + left) / 2;
			if (card_array[mid] == num_array[i])
			{
				check_array[i] = 1;
				break;
			}
			if (card_array[mid] > num_array[i])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << check_array[i] << ' ';
	}
	return 0;
}