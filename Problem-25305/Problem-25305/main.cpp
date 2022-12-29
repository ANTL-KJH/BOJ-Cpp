/*
* Project Name : Problem-25305
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-25305
* Program First Author : JH KIM
* Date of First Write : 2022.12.28
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.28			v1.0			First Write
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numStudent, numPrize, * score, max, max_idx, temp;
    cin >> numStudent >> numPrize;
    score = new int[numStudent];
    for (int i = 0; i < numStudent; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < numStudent; i++)
    {
        max_idx = i;
        max = score[i];
        for (int p = i; p < numStudent; p++)
        {
            if (score[p] > max)
            {
                max = score[p];
                max_idx = p;
            }
        }
        if (max_idx != i)
        {
            temp = score[i];
            score[i] = score[max_idx];
            score[max_idx] = temp;
        }
    }
    cout << score[numPrize - 1];
    delete[] score;
    return 0;
}