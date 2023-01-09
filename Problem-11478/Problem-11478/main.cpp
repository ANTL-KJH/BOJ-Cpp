/*
* Project Name : Problem-11478
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11478
* Program First Author : JH KIM
* Date of First Write : 2023.01.09
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.09			v1.0			First Write
*/
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    map<string, bool> diff_str;
    string str, sub_str;
    cin >> str;
    for (int i = 1; i <= str.size(); i++)
    {
        for (int p = 0; p <= str.size() - i; p++)
        {
            sub_str = str.substr(p, i);
            diff_str[sub_str] = true;
        }
    }
    cout << diff_str.size();
    return 0;
}