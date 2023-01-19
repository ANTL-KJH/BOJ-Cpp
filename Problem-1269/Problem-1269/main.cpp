/*
* Project Name : Problem-1269
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1269
* Program First Author : JH KIM
* Date of First Write : 2023.01.06
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.06			v1.0			First Write
* JH KIM                2023.01.09          v1.1            Write main func
*/
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<int, bool> difference_of_set;
    int a, b, input_num;
    cin >> a >> b;
    for (int i = 0; i < a + b; i++)
    {
        cin >> input_num;
        if (difference_of_set[input_num] == true)
        {
            difference_of_set.erase(input_num);
        }
        else
            difference_of_set[input_num] = true;
    }
    cout << difference_of_set.size();
    return 0;
}