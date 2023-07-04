/*
* Project Name : Problem-2485
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2485
* Program First Author : JH KIM
* Date of First Write : 2023.06.29
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.29			v1.0			First Write
* JH KIM				2023.06.30			v1.1			findMinDiff 매개변수 N추가, 메모리 반납 추가
*/

#include <iostream>
using namespace std;

int findMinDiff(int Diff, int* tree, int N);
int main(void)
{
	int N, minDiff = 1000000000, maxPos=0, minPos = 1000000000, pos;
	cin >> N;
	int* treePos = (int*)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++)
	{
		cin >> pos;
		treePos[i] = pos;
		minPos = min(minPos, pos);
		maxPos = max(maxPos, pos);
		if (i != 0)
			minDiff = min(treePos[i] - treePos[i - 1], minDiff);
	}
	int newMinDiff = findMinDiff(minDiff, treePos, N);
	if (newMinDiff == 0)
	{
		cout << 0;
	}
	else
	{
		cout << (maxPos - minPos) / newMinDiff - N + 1;
	}

	free(treePos);
	return 0;
}

int findMinDiff(int Diff, int* tree, int N)
{
	int newMinDiff = Diff, maxPos, minPos;
	maxPos = tree[N - 1];
	minPos = tree[0];
	for (int q = 2; q <= maxPos - minPos; q++)
	{
		for (int i = 1; i < N; i++)
		{ 
			if ((tree[i] - minPos) % newMinDiff != 0)
				break;
			if (i == N - 1)
			{
				return newMinDiff;
			}

		}
		newMinDiff = Diff / q;
		if (newMinDiff == 0)
			return 0;
	}
}