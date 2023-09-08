/*
* Project Name : Problem-1780
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1780
* Program First Author : JH KIM
* Date of First Write : 2023.08.22
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.22			v1.00			First Write
*/
#include <iostream>
using namespace std;
typedef struct paper
{
	int minus = 0;
	int zero = 0;
	int plus = 0;
};

void paperCount(short** arr, int x, int y, int size, paper* p)
{
	char target = arr[x][y];
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
		paperCount(arr, x, y, size / 3, p);
		paperCount(arr, x + size / 3, y, size / 3, p);
		paperCount(arr, x + size / 3 * 2, y, size / 3, p);

		paperCount(arr, x, y + size / 3, size / 3, p);
		paperCount(arr, x + size / 3, y + size / 3, size / 3, p);
		paperCount(arr, x + size / 3 * 2, y + size / 3, size / 3, p);

		paperCount(arr, x, y + size / 3 * 2, size / 3, p);
		paperCount(arr, x + size / 3, y + size / 3 * 2, size / 3, p);
		paperCount(arr, x + size / 3 * 2, y + size / 3 * 2, size / 3, p);
	}
	else
	{
		if (target == -1)
			p->minus++;
		else if (target == 0)
			p->zero++;
		else
			p->plus++;
	}


}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	short** arr;
	paper p;
	cin >> N;
	arr = (short**)calloc(N, sizeof(short*));
	for (int i = 0; i < N; i++)
	{
		arr[i] = (short*)calloc(N, sizeof(short));
	}
	for (int p = 0; p < N; p++)
	{
		for (int q = 0; q < N; q++)
		{
			cin >> arr[p][q];
		}
	}
	paperCount(arr, 0, 0, N, &p);
	cout << p.minus << "\n";
	cout << p.zero << "\n";
	cout << p.plus;
	for (int o = 0; o < N; o++)
	{
		free(arr[o]);
	}
	free(arr);
	return 0;
}