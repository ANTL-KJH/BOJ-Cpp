/*
* Project Name : Problem-1152
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1152
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
#include <vector>
#include <sstream>                          // for stringstream
using namespace std;

int main()
{
    string input_str;
    string temp;
    vector<string> vec;

    getline(cin, input_str);              // cin 사용하는 경우 공백을 무시함
    stringstream ss(input_str);
    while (ss >> temp)
    {
        vec.push_back(temp);
    }
    cout << vec.size();
    return 0;
}