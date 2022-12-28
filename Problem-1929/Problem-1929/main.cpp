/*
* Project Name : Problem-1929
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1929
* Program First Author : JH KIM
* Date of First Write : 2022.12.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.27			v1.0			First Write
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int start, end;
    bool* array;
    cin >> start >> end;
    array = new bool[end + 1];
    //fill_n(array, end + 1, true);
    for (int i = 2; i < end + 1; i++)
        array[i] = true;
    array[0] = false;
    array[1] = false;

    for (int i = 2; i <= sqrt(end); i++)
        if (array[i] == true)
            for (int j = i * 2; j <= end; j += i)       // i의 2배수부터 i의 n배만큼 큰 숫자는 모두 소수x
                array[j] = false;

    for (int i = start; i <= end; i++)
        if (array[i] == true)
            cout << i << "\n";
    return 0;
}