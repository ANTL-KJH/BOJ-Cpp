/*
* Project Name : Problem-1712
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1712
* Program First Author : JH KIM
* Date of First Write : 2022.12.26
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.26			v1.0			First Write
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long fixed_cost, cost_per_unit, price, count = 0;
    cin >> fixed_cost >> cost_per_unit >> price;
    if (cost_per_unit >= price)
    {
        cout << -1;
        return 0;
    }
    count = fixed_cost / (price - cost_per_unit) + 1;
    cout << count;
    return 0;
}