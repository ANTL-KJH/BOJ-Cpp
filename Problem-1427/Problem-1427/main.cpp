/*
* Project Name : Problem-1427
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1427
* Program First Author : JH KIM
* Date of First Write : 2022.12.29
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.29			v1.0			First Write
*/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main(void)
{
    // 시간을 줄이기 위해 사용
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    string input_num;
    cin >> input_num; 
    int max, max_idx, * i_array, temp;
    i_array = new int[input_num.size()];
    for (int i = 0; i < input_num.size(); i++)
    {
        i_array[i] = input_num[i] -'0';
    }
    for (int i = 0; i < input_num.size(); i++)
    {
        max = i_array[i];
        max_idx = i;
        for (int p = i; p < input_num.size(); p++)
        {
            if (i_array[p] > max)
            {
                max = i_array[p];
                max_idx = p;
            }
        }
        if (max_idx != i)
        {
            temp = i_array[i];
            i_array[i] = i_array[max_idx];
            i_array[max_idx] = temp;
        }
    }
    for (int i = 0; i < input_num.size(); i++)
    {
        cout << i_array[i];
    }
    return 0;
}