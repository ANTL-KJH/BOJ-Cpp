/*
* Project Name : Problem-2581
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2581
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
    int start, end, sum=0, min;
    cin >> start >> end;
    min = end;
    for (int i = start; i <= end; i++)
    {
        if (i == 2)                         // 2 예외처리 필수
        {
            sum += 2;
            min = 2;
        }
        for (int p = 2; p < i; p++)         // 2부터 i-1번째 수의 나머지가 0인경우가 있다면 소수x
        {
            if (i % p == 0)
                break;
            if (p == i - 1)
            {

                if (min == end)
                    min = i;
                sum += i;
            }
        }
    }
    if (sum != 0)
        cout << sum << endl << min;
    else
        cout << -1;
    return 0;
}