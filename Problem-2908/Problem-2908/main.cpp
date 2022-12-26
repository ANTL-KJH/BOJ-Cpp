/*
* Project Name : Problem-2908
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2908
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
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    char temp;
    int n1, n2;
    cin >> s1 >> s2; 

    // swap
    temp = s1[0];
    s1[0] = s1[2];
    s1[2] = temp;
    temp = s2[0];
    s2[0] = s2[2];
    s2[2] = temp;
   
    n1 = stoi(s1);          // string to int
    n2 = stoi(s2);

    if (n1 > n2)
        cout << n1;
    else
        cout << n2;
    return 0;
}