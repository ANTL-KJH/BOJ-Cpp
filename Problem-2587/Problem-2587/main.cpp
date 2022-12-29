/*
* Project Name : Problem-2587
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2587
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
    int n_array[5], sum = 0, avg = 0, min_idx, min, temp;
    for (int i = 0; i < 5; i++)
    {
        cin >> n_array[i];
        sum += n_array[i];
    }

    for (int i = 0; i < 5; i++)
    {
        min_idx = i;
        min = n_array[i];
        for (int p = i; p < 5; p++)
        {
            if (n_array[p] < min)
            {
                min = n_array[p];
                min_idx = p;
            }
        }
        if (min_idx != i)
        {
            temp = n_array[i];
            n_array[i] = n_array[min_idx];
            n_array[min_idx] = temp;
        }
    }

    avg = sum / 5;
    cout << avg << endl << n_array[2];

    return 0;
}