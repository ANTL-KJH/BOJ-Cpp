/*
* Project Name : Problem-1992
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1992
* Program First Author : JH KIM
* Date of First Write : 2023.08.16
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.16			v1.00			First Write
* JH KIM				2023.08.22			v1.10			write quadTree func
*/

#include <iostream>
using namespace std;

void quadTree(bool** arr, int size, int x, int y)
{
	bool target = arr[x][y];
	bool flag = false;

	for (int i = x; i < x + size; i++)
	{
		for (int p = y; p < y + size; p++)
		{
			if (arr[i][p] != target)
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
			break;
	}
	if (flag == true)
	{
		cout << "(";
		quadTree(arr, size / 2, x, y);
		quadTree(arr, size / 2, x, y + (size / 2));
		quadTree(arr, size / 2, x + (size / 2), y);
		quadTree(arr, size / 2, x + (size / 2), y + (size / 2));
		cout << ")";
	}
	else
		cout << target;

}

int main(void)
{
	int N;
	cin >> N;
	bool** arr;
	string s;
	arr = (bool**)calloc(N, sizeof(bool*));
	for (int i = 0; i < N; i++)
	{
		arr[i] = (bool*)calloc(N, sizeof(bool));
	}
	for (int p = 0; p < N; p++)
	{
		cin >> s;
		for (int q = 0; q < N; q++)
		{
			arr[p][q] = s[q]-'0';
		}
	}
	quadTree(arr, N, 0, 0);
	for (int o = 0; o < N; o++)
	{
		free(arr[o]);
	}
	free(arr);
	return 0;
}