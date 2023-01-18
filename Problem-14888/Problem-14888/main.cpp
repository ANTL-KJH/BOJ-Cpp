/*
* Project Name : Problem-14888
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-14888
* Program First Author : JH KIM
* Date of First Write : 2023.01.17
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.17			v1.0			First Write
*/
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int N, max = INT_MIN, min = INT_MAX;
int oper[4] = { 0, }, * n_array;

void find_min_max(int result, int n)
{
    if (n == N-1)
    {
        if (result > ::max)
            ::max = result;
        if (result < ::min)
            ::min = result;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (oper[i] > 0)
        {
            oper[i]--;          // 사용한 연산자 --
            if (i == 0)         // 0 => +
                find_min_max(result + n_array[n + 1], n + 1);
            else if (i == 1)    // 1 => -
                find_min_max(result - n_array[n + 1], n + 1);
            else if (i == 2)    // 2 => *
                find_min_max(result * n_array[n + 1], n + 1);
            else                // 3 => /
                find_min_max(result / n_array[n + 1], n + 1);
            oper[i]++;          // 미사용 연산자 반환
        }
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    n_array = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> n_array[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> oper[i];
    }
   
    find_min_max(n_array[0], 0);
    cout << ::max << "\n" << ::min;
    delete[] n_array;
    return 0;
}