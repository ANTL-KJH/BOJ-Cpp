/*
* Project Name : Problem-2775
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2775
* Program First Author : JH KIM
* Date of First Write : 2022.12.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.27			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main()
{
	int test_loop, k, n;
	int mtrx[15][14];
	for (int q = 0; q < 15; q++)
	{
		mtrx[q][0] = 1;
	}
	for (int p = 0; p < 14; p++)
	{
		mtrx[0][p] = p + 1;
	}
	for (int o = 1; o < 15; o++)
	{
		for (int u = 1; u < 14; u++)
		{
			mtrx[o][u] = mtrx[o][u - 1] + mtrx[o - 1][u];
		}
	}
	cin >> test_loop;
	for (int i = 0; i < test_loop; i++)
	{
		cin >> k;
		cin >> n;
		cout << mtrx[k][n-1] << endl;
	}
	return 0;
}