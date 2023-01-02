/*
* Project Name : Problem-2447
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2447
* Program First Author : JH KIM
* Date of First Write : 2022.12.30
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.30			v1.0			First Write
*/

#include <iostream>
using namespace std;

void drawStar(int i, int j, int num);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            drawStar(i, j, n);
        cout << '\n';
    }
    return 0;
}

void drawStar(int i, int j, int num)
{
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
    {
        cout << ' ';
    }
    else
    {
        if (num / 3 == 0)
            cout << '*';
        else
            drawStar(i, j, num / 3);
    }
}


/*
void drawStar(int row, int col)
{
    for (int p = 0; p < row; p++)
    {
        for (int i = 0; i < col; i++)
        {
            if ((p/ 3)%3 == 1 && i/3%3 == 1)
                cout << "   ";
            else
                cout << "***";
        }
        cout << "\n";
        for (int i = 0; i < col; i++)
        {
            if ((p / 3) % 3 == 1 && i / 3 % 3 == 1)
                cout << "   ";
            else
                cout << "* *";
        }
        cout << "\n";
        for (int i = 0; i < col; i++)
        {
            if ((p / 3) % 3 == 1 && i / 3 % 3 == 1)
                cout << "   ";
            else
                cout << "***";
        }            
        cout << "\n";
    }
}
*/