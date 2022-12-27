/*
* Project Name : Problem-1978
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1978
* Program First Author : JH KIM
* Date of First Write : 2022.12.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.27			v1.0			First Write
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numOfnum, count = 0, * n_array;
    cin >> numOfnum;
    n_array = (int*)new int[numOfnum];
    for (int i = 0; i < numOfnum; i++)
    {
        cin >> n_array[i];
    }
    for (int i = 0; i < numOfnum; i++)
    {
        if (n_array[i] == 2)                        // 입력된 값이 2인경우
        {
            count++;
            continue;
        }
        for (int p = 2; p < n_array[i]; p++)        // 2 부터 해당 숫자 - 1까지 나누었을 때 나머지 확인
        {
            if (n_array[i] % p == 0)
            {
                break;
            }
            if (p == n_array[i] - 1)                // 해당 숫자 - 1 까지 나누었을 때 나머지가 0인 case가 없으면 소수
            {
                count++;
            }
        }

    }
    cout << count;
    return 0;
}