/*
* Project Name : Problem-2292
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
// arithmetic progression ��������
#include <iostream>
using namespace std;

int main()
{
    int target, start = 1, arithmetic_progression, count=0, sum=1;
    cin >> target;
    while (1)
    {
        sum += 6 * count;               // ������������ 6ĭ�� ����
        count += 1;
        if (target <= sum)
            break;
    }
    cout << count;
    return 0;
}