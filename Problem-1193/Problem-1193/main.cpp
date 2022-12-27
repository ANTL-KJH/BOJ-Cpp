/*
* Project Name : Problem-1193
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2292
* Program First Author : JH KIM
* Date of First Write : 2022.12.26
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.26			v1.0			First Write
*/
// arithmetic progression 등차수열
#include <iostream>
using namespace std;

int main()
{
    int target, count = 1, t_count;
    int numerator, denominator, arithmetic_progression;     // numerator:분자, denominator:분모, arithmetic_progression:등차수열
    numerator = 1; denominator = 1;
    cin >> target;
    while (1)
    {
        arithmetic_progression = (2 + (count - 1)) * count / 2;
        if (arithmetic_progression >= target)
            break;
        count++;
    }
    t_count = (2 + (count - 2)) * (count - 1) / 2 + 1;      // 이전 등차수열 합
    if (count % 2 == 0)                                     // 짝수 대각선
    {
        numerator = 1;
        denominator = count;
        while (1)
        {
            if (target == t_count)
            {
                cout << numerator << "/" << denominator;
                return 0;
            }
            numerator++;
            denominator--;
            t_count++;
        }
    }
    else                                                    // 홀수 대각선
    {
        numerator = count;
        denominator = 1;
        while (1)
        {
            if (target == t_count)
            {
                cout << numerator << "/" << denominator;
                return 0;
            }
            numerator--;
            denominator++;
            t_count++;
        }
    }
    return 0;
}