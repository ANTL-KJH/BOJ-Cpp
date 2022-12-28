/*
* Project Name : Problem-2738
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2738
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
    int row, col;
    int** mtrx1, ** mtrx2;
    cin >> row >> col;
    // Dynamic memory allocation
    mtrx1 = new int* [row];
    mtrx2 = new int* [row];
    for (int i = 0; i < row; i++)
    {
        mtrx1[i] = new int[col];
        mtrx2[i] = new int[col];
    }

    // get mtrx1 data from user
    for (int p = 0; p < row; p++)
    {
        for (int q = 0; q < col; q++)
        {
            cin >> mtrx1[p][q];
        }
    }
    // get mtrx2 data from user
    for (int p = 0; p < row; p++)
    {
        for (int q = 0; q < col; q++)
        {
            cin >> mtrx2[p][q];
        }
    }

    // add mtrx and printout
    for (int p = 0; p < row; p++)
    {
        for (int q = 0; q < col; q++)
        {
            mtrx1[p][q] += mtrx2[p][q];
            cout << mtrx1[p][q] << " ";
        }
        cout << endl;
    }
    
    // return memory
    for (int i = 0; i < row; i++)
    {
        delete[] mtrx1[i];
        delete[] mtrx2[i];
    }
    delete[] mtrx1;
    delete[] mtrx2;
    return 0;
}