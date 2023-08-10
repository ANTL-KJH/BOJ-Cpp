/*
* Project Name : Problem-1541
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1541
* Program First Author : JH KIM
* Date of First Write : 2023.08.10
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.10			v1.00			First Write
*/

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string str, sstr;
    int lastpoint=0, result=0, minus=0;
    bool flag = false;
    queue<int> numberQ;
    queue<char> operatorQ;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '-' || str[i] == '+')
        {
            sstr = str.substr(lastpoint, i - lastpoint);
            lastpoint = i + 1;
            numberQ.push(stoi(sstr));
            operatorQ.push(str[i]);
        }
        if (i == str.size() - 1)
        {
            sstr = str.substr(lastpoint, i - lastpoint+1);
            numberQ.push(stoi(sstr));
        }
    }
    result = numberQ.front();
    numberQ.pop();
    while (operatorQ.size() != 0)
    {
        if (flag == false && operatorQ.front() == '+')
        {
            result += numberQ.front();
            numberQ.pop();
            operatorQ.pop();
        }
        else if (flag == false && operatorQ.front() == '-')
        {
            minus += numberQ.front();
            numberQ.pop();
            operatorQ.pop();
            flag = true;
        }
        else if (flag == true && operatorQ.front() == '-')
        {
            result -= minus;
            minus =  numberQ.front();
            numberQ.pop();
            operatorQ.pop();
        }
        else if (flag == true && operatorQ.front() == '+')
        {
            minus += numberQ.front();
            numberQ.pop();
            operatorQ.pop();
        }
    }
    result -= minus;
    cout << result;
    return 0;
}