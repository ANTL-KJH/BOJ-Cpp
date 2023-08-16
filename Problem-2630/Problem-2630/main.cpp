/*
* Project Name : Problem-2630
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2630
* Program First Author : JH KIM
* Date of First Write : 2023.08.16
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.16			v1.00			First Write
*/

#include <iostream>
using namespace std;
struct colorPaper
{
	int white = 0;
	int blue = 0;
};

void countPaper(colorPaper* cP, bool** arr, int size, int x, int y)
{
	bool target = arr[x][y], flag=false;
	for (int i = x; i < x+size; i++)
	{
		for (int p = y; p < y+size; p++)
		{
			if (arr[i][p] != target)
			{
				countPaper(cP, arr, size / 2, x, y);
				countPaper(cP, arr, size / 2, x + (size / 2), y);
				countPaper(cP, arr, size / 2, x, y + (size / 2));
				countPaper(cP, arr, size / 2, x + (size / 2), y + (size / 2));
				flag = true;
				break;
			}
		}
		if (flag == true)
			break;
	}
	if (flag == false)
		if (arr[x][y] == true)
			cP->blue++;
		else
			cP->white++;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	colorPaper cP;
	int N;
	cin >> N;
	bool** arr;
	arr = (bool**)calloc(N, sizeof(bool*));
	for (int i = 0; i < N; i++)
	{
		arr[i] = (bool*)calloc(N, sizeof(bool));
	}

	for (int p = 0; p < N; p++)
	{
		for (int q = 0; q < N; q++)
		{
			cin >> arr[p][q];
		}
	}
	countPaper(&cP, arr, N, 0, 0);
	cout << cP.white << "\n";
	cout << cP.blue;
	for (int i = 0; i < N; i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}