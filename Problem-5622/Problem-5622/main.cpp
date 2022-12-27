/*
* Project Name : Problem-5622
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-5622
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
    string tel_number;
    int sec = 0;
    cin >> tel_number;
    for (int i = 0; i < tel_number.size(); i++)
    {
        if (tel_number[i] == '1')
            sec += 2;
        else if (tel_number[i] == 'A' || tel_number[i] == 'B' || tel_number[i] == 'C')
        {
            sec += 3;
        }
        else if (tel_number[i] == 'D' || tel_number[i] == 'E' || tel_number[i] == 'F')
        {
            sec += 4;
        }
        else if (tel_number[i] == 'G' || tel_number[i] == 'H' || tel_number[i] == 'I')
        {
            sec += 5;
        }
        else if (tel_number[i] == 'J' || tel_number[i] == 'K' || tel_number[i] == 'L')
        {
            sec += 6;
        }
        else if (tel_number[i] == 'M' || tel_number[i] == 'N' || tel_number[i] == 'O')
        {
            sec += 7;
        }
        else if (tel_number[i] == 'P' || tel_number[i] == 'Q' || tel_number[i] == 'R' || tel_number[i] == 'S')
        {
            sec += 8;
        }
        else if (tel_number[i] == 'T' || tel_number[i] == 'U' || tel_number[i] == 'V')
        {
            sec += 9;
        }
        else if (tel_number[i] == 'W' || tel_number[i] == 'X' || tel_number[i] == 'Y' || tel_number[i] == 'Z')
        {
            sec += 10;
        }
    }
    cout << sec;
    return 0;
}