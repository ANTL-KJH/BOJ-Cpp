/*
* Project Name : Problem-1764
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1764
* Program First Author : JH KIM
* Date of First Write : 2023.01.06
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.06			v1.0			First Write
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<string, int> heard_seen;
    vector<string> str_vector;
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        string input_str;
        cin >> input_str;
        heard_seen[input_str]++;
        if (heard_seen[input_str] > 1)
            str_vector.push_back(input_str);
    }
    sort(str_vector.begin(), str_vector.end());
    cout << str_vector.size() << '\n';
    vector<string>::iterator iter;
    for (iter = str_vector.begin(); iter != str_vector.end(); iter++)
    {
        cout << *iter << "\n";
    }

    return 0;
}