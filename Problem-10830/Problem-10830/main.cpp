/**
* Project Name : Problem-10830
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10830
* Program First Author : JH KIM
* Date of First Write : 2023.09.08
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.09.08			v1.00			First Write
*/
#include <iostream>
#include <vector>
using namespace std;


long long mtrx_original[5][5];
long long mtrx_result[5][5];


void powMtrx(long long a[5][5], long long b[5][5], int N)
{
	long long mtrx_tmp[5][5];

	for (int i = 0; i < N; i++)
	{
		vector<int> tmp;
		for (int j = 0; j < N; j++)
		{
			int sum = 0;
			for (int k = 0; k < N; k++)
			{
				sum += (a[i][k] * b[k][j]) % 1000;
			}
			mtrx_tmp[i][j] = sum% 1000;
		}

	}

	for (int r = 0; r < N; r++)
	{
		for (int c = 0; c < N; c++)
		{
			a[r][c] = mtrx_tmp[r][c];
		}
	}
}

int main(void)
{
	long long N, B, num;
	cin >> N >> B;
	for (int i = 0; i < N; i++)
	{
		for (int p = 0; p < N; p++)
		{
			cin >> num;
			mtrx_original[i][p] = num;
		}
		mtrx_result[i][i] = 1;
	}
	while (B > 0)
	{
		if (B % 2 == 1)
			powMtrx(mtrx_result, mtrx_original, N);
		powMtrx(mtrx_original, mtrx_original, N);
		B /= 2;
	}
	for (int r = 0; r < N; r++)
	{
		for (int c = 0; c < N; c++)
		{
			cout << mtrx_result[r][c] << " ";
		}
		cout << "\n";
	}
}