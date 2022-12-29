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
        // (0, 0)이 입력되었을 때, 0~10, 0~10을 마킹하지 않고 1~10 범위만 마킹
        // 예를 들어 (0,0), (0,10)이면 y=10에서 두 색종이가 만나지만 넓이에는 영향 x
        // 따라서 왼쪽과 아래부분을 한칸씩 덜 마킹하므로 맞닿는 부분에 간섭 x
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