/*
* Project Name : Problem-1316
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1316
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
    int alphabet[26] = { 0, }, s = 0, loop, g_num_count = 0;
    string str;
    cin >> loop;
    g_num_count = loop;
    for (int q = 0; q < loop; q++)
    {
        for (int p = 0; p < 26; p++)
        {
            alphabet[p] = 0;
        }
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            s = str[i] - 97;
            if (i == 0)
            {
                alphabet[s]++;
            }
            else if (i > 0)
            {
                if (str[i] == str[i - 1])
                {
                    alphabet[s]++;
                }
                else if ((str[i] != str[i - 1]) && alphabet[s] == 0)
                {
                    alphabet[s]++;
                }
                else
                {
                    g_num_count--;
                    break;
                }
            }
        }
        
    }
    cout << g_num_count;
    return 0;
}