/*
* Project Name : Problem-2108
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2108
* Program First Author : JH KIM
* Date of First Write : 2022.12.29
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.29			v1.0			First Write
*/
#include <iostream>
#include <algorithm>
#include <cmath>        // for round function
using namespace std;


int main(void)
{
    // 시간을 줄이기 위해 사용
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int numOfnum, c_array[8001] = { 0, },  input_num = 0, max = 0, * n_array, count = 0, min_value=0, max_value=0, max_count = 0, avg;
    double sum = 0.0;
    cin >> numOfnum;
    n_array = new int[numOfnum];
    for (int i = 0; i < numOfnum; i++)
    {
        cin >> input_num;
        n_array[i] = input_num;
        c_array[input_num + 4000]++;
        sum += input_num;
    }
    avg = (int)round(sum / numOfnum);
    sort(n_array, n_array + numOfnum);

    cout << avg << "\n" << n_array[numOfnum / 2] << "\n";
    for (int i = 0; i < 8001; i++)
    {
        if (c_array[i] > max)
        {
            max = c_array[i];
        }
    }
    for (int i = 0; i < 8001; i++)
    {
        if (c_array[i] == max)
        {
            count++;
        }
    }
    for (int i = 0; i < 8001; i++)
    {
        if (c_array[i] == max)
        {
            if (count == 1)
            {
                cout << i - 4000 << "\n";
                break;
            }
            else
            {
                max_count++;
                if (max_count == 2)
                {
                    cout << i - 4000 << "\n";
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 8001; i++)
    {
        if (c_array[i] != 0)
        {
            min_value = i;
            break;
        }
    }
    for (int i = 8000; i >=0; i--)
    {
        if (c_array[i] != 0)
        {
            max_value = i;
            break;
        }
    }
    cout << max_value - min_value;
    return 0;
}
