/*
* Project Name : Problem-11660
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11660
* Program First Author : JH KIM
* Date of First Write : 2023.02.23
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.23			v1.0			First Write
* JH KIM				2023.02.27			v1.1			Algorithm modified
*/

#include <iostream>
#include <string>
#include <limits.h>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, K, tmpB, tmpW, result = INT_MAX;
	int** dpB, ** dpW;
	char** chessBoard;
	string str;

	cin >> N >> M >> K;

	chessBoard = new char* [N + 1];
	dpB = new int* [N + 1];
	dpW = new int* [N + 1];
	for (int i = 0; i <= N; i++)
	{
		chessBoard[i] = new char[M + 1];
		dpB[i] = new int[M + 1] {};
		dpW[i] = new int[M + 1] {};
	}

	for (int i = 1; i <= N; i++)
	{
		cin >> str;
		for (int j = 1; j <= M; j++)
		{
			chessBoard[i][j] = str[j-1];
		}
	}


	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			dpB[i][j] = dpB[i - 1][j] + dpB[i][j - 1] - dpB[i - 1][j - 1];
			dpW[i][j] = dpW[i - 1][j] + dpW[i][j - 1] - dpW[i - 1][j - 1];
			if (((i + j) % 2 == 0 && chessBoard[i][j] == 'W') || ((i + j) % 2 == 1 && chessBoard[i][j] == 'B'))
				dpB[i][j]++;
			else
				dpW[i][j]++;
		}
	}


	for (int i = 0; i <= N - K; i++)
	{
		for (int j = 0; j <= M - K; j++)
		{
			tmpB = dpB[i + K][j + K] - dpB[i][j + K] - dpB[i + K][j] + dpB[i][j];
			tmpW = dpW[i + K][j + K] - dpW[i][j + K] - dpW[i + K][j] + dpW[i][j];
			result = min(result, min(tmpB, tmpW));
		}
	}

	cout << result;

	for (int i = 0; i < N; i++)
	{
		delete[] chessBoard[i];
		delete[] dpB[i];
		delete[] dpW[i];
	}
	delete[] chessBoard;
	delete[] dpB;
	delete[] dpW;

	return 0;
}