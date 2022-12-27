/*
* Project Name : Problem-10757
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10757
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
    string a, b, result, ans;
    char rest;
    cin >> a >> b;
    int num_a, num_b, temp, carrier = 0;
    int size_a = a.size();
    int size_b = b.size();
    while (size_a > 0 || size_b > 0)
    {
        num_a = 0;
        if (size_a > 0)
        {
            size_a--;
            num_a = a[size_a] - '0';            // convert char to int
        }
        num_b = 0;
        if (size_b > 0)
        {
            size_b--;
            num_b = b[size_b] - '0';            // convert char to int
        }
        temp = num_a + num_b + carrier;
        carrier = temp / 10;
        temp %= 10;
        rest = temp + '0';
        result += rest;
    }
    if (carrier > 0)
    {
        result += carrier + '0';
    }
    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i];
    }
}