/*
* Project Name : Problem-1546
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1546
* Program First Author : JH KIM
* Date of First Write : 2022.12.23
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.23			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int subject = 0, max;
	int* score;
	double sum = 0.0, cal = 0.0;
	double* dscore;
	cin >> subject;
	score = (int*)new int[subject];
	dscore = (double*)new double[subject];
	for (int i = 0; i < subject; i++)
	{
		cin >> score[i];
	}
	max = score[0];
	for (int p = 1; p < subject; p++)
	{
		if (max < score[p])
		{
			max = score[p];
		}
	}
	for (int q = 0; q < subject; q++)
	{
		dscore[q] = ((double)score[q] / max * 100);
	}
	for (int o = 0; o < subject; o++)
	{
		sum += dscore[o];
	}
	cout << fixed;
	cout.precision(3);
	cout << sum / (double)subject;
	delete[] score;
	delete[] dscore;
	return 0;
}