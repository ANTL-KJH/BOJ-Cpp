/*
* Project Name : Problem-11050
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11050
* Program First Author : JH KIM
* Date of First Write : 2023.01.11
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.11			v1.0			First Write
*/
#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
        return 1;
    int result = 1;
    for (int i = num; i >= 1; i--)
    {
        result *= i;
    }
    return result;
}


int main(void)
{
    int n, k;
    cin >> n >> k;
    cout << factorial(n) / (factorial(k) * factorial(n - k));
    return 0;
}