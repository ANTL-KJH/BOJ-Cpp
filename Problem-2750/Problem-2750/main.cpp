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

int main()
{
    int numOfnum, min, min_idx, temp;
    int* n_array;
    cin >> numOfnum;
    n_array = new int[numOfnum];
    for (int i = 0; i < numOfnum; i++)
    {
       cin >> n_array[i];
    }
    for (int i = 0; i < numOfnum; i++)
    {
        min_idx = i;
        min = n_array[i];
        for (int p = i; p < numOfnum; p++)
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
    for (int i = 0; i < numOfnum; i++)
    {
        cout << n_array[i] << endl;
    }
    return 0;
}