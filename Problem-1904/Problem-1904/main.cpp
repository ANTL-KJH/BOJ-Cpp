/*
* Project Name : Problem-1904
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1904
* Program First Author : JH KIM
* Date of First Write : 2023.01.18
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.18			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    int num1 = 1, num2 = 2, num3 = 0;
    
    cin >> N;
    
    for (int i = 3; i <= N; i++)
    {
        num3 = (num1 + num2) % 15746;
        num1 = num2;
        num2 = num3;
    }
    if (N == 1)
        num3 = 1;
    else if (N == 2)
        num3 = 2;

    cout << num3;
    return 0;
}