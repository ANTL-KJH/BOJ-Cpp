/*
* Project Name : Problem-2566
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2566
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
    int row, col, max_value = 0, max_idx_r = 0, max_idx_c = 0;
    int** mtrx1;
    row = 9;
    col = 9;

    // Dynamic memory allocation
    mtrx1 = new int* [row];

    for (int i = 0; i < row; i++)
    {
        mtrx1[i] = new int[col];
    }

    // get mtrx data from user
    for (int p = 0; p < row; p++)
    {
        for (int q = 0; q < col; q++)
        {
            cin >> mtrx1[p][q];
            if (mtrx1[p][q] > max_value)
            {
                max_value = mtrx1[p][q];
                max_idx_r = p;
                max_idx_c = q;
            }
        }
    }
    cout << max_value << endl << max_idx_r + 1 << " " << max_idx_c + 1;
    // return memory
    for (int i = 0; i < row; i++)
    {
        delete[] mtrx1[i];
    }
    delete[] mtrx1;
    return 0;
}