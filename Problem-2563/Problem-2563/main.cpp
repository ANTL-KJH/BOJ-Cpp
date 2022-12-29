/*
* Project Name : Problem-2563
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2563
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
#define SIZE 101

int main()
{
    int numOfpaper, x, y, count=0;
    bool mtrx[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        for (int p = 0; p < SIZE; p++)
        {
            mtrx[i][p] = false;
        }
    }
    cin >> numOfpaper;
    for (int i = 0; i < numOfpaper; i++)
    {
        // (0, 0)�� �ԷµǾ��� ��, 0~10, 0~10�� ��ŷ���� �ʰ� 1~10 ������ ��ŷ
        // ���� ��� (0,0), (0,10)�̸� y=10���� �� �����̰� �������� ���̿��� ���� x
        // ���� ���ʰ� �Ʒ��κ��� ��ĭ�� �� ��ŷ�ϹǷ� �´�� �κп� ���� x
        cin >> x >> y;
        for (int p = x+1; p <= x + 10; p++)
        {
            for (int q = y+1; q <= y + 10; q++)
            {
                if (mtrx[p][q] == true)
                {
                    count++;
                }
                mtrx[p][q] = true;
            }
        }
    }
    cout << numOfpaper * 100 - count;

    return 0;
}