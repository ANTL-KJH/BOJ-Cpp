/*
* Project Name : Problem-9020
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9020
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
    int start, loop, lower_n, upper_n, target_num;
    bool array[10001];
    //fill_n(array, end + 1, true);
    for (int i = 2; i < 10001; i++)
        array[i] = true;
    array[0] = false;
    array[1] = false;

    for (int i = 2; i <10000; i++)
        if (array[i] == true)
            for (int j = i * 2; j <= 10000; j += i)       // i의 2배수부터 i의 n배만큼 큰 숫자는 모두 소수x
                array[j] = false;
    cin >> loop;

    for (int o = 0; o < loop; o++)
    {
        cin >> target_num;
        lower_n = target_num / 2;
        upper_n = target_num / 2;
        while (1)
        {
            if ((array[lower_n] == true) && (array[upper_n]) == true)
            {
                cout << lower_n << " " << upper_n << endl;
                break;
            }
            lower_n--;
            upper_n++;
        }
    }
    return 0;
}