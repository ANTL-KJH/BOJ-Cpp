/*
* Project Name : Problem-11729
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11729
* Program First Author : JH KIM
* Date of First Write : 2022.12.30
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.30			v1.0			First Write
*/

#include <iostream>
using namespace std;


void hanoi(int n, int start, int end, int bypass)
{
    if (n == 1)
        cout << start << " " << end << "\n";
    else
    {
        hanoi(n - 1, start, bypass, end);
        cout << start << " " << end << "\n";

        hanoi(n - 1, bypass, end, start);
    }
}
int main(void)
{
    int num;
    cin >> num;
    cout << (1 << num) - 1 << "\n";     // hanoi's moving count => 2's n-th -1
    hanoi(num, 1, 3, 2);                // 1 => 3
    return 0;
}