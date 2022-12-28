/*
* Project Name : Problem-11653
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11653
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
    int input_num;
    cin >> input_num;
    if (input_num == 1)
        return 0;
    for (int i = 2; i <= input_num; i++)
    {
        if (input_num % i == 0)
        {
            input_num /= i;
            cout << i << endl;
            i--;
        }
    }
    return 0;
}