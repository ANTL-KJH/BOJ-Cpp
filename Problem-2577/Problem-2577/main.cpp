/*
* Project Name : Problem-2577
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2577
* Program First Author : JH KIM
* Date of First Write : 2023.01.17
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.17			v1.0			First Write
*/
#include <iostream>
#include <string>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int num;
    int multiply=1;
    int arr[10] = { 0, };
    string str;
    for (int i = 0; i < 3; i++)
    {
        cin >> num;
        multiply *= num;
    }
    str = to_string(multiply);
    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i]-'0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\n";
    }
}