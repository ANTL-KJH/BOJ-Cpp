/*
* Project Name : Problem-2580
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2580
* Program First Author : JH KIM
* Date of First Write : 2023.01.16
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.16			v1.0			First Write
* JH KIM                2023.01.17          v1.1            func write
*/
#include <iostream>
#include <vector>
using namespace std;

int sudoku[9][9];
int zero = 0;
bool flag_found = false;

vector<pair<int, int>> zero_pos;
vector<pair<int, int>>::iterator iter;

bool is_valid(pair<int, int> p)
{
    int square_x = p.first / 3; 
    int square_y = p.second / 3;

    // same row, same column check
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[p.first][i] == sudoku[p.first][p.second] && i != p.second)   // 같은 열에 같은 숫자가 있는 경우 false
            return false;
        if (sudoku[i][p.second] == sudoku[p.first][p.second] && i != p.first)   // 같은 행에 같은 숫자가 있는 경우 false
            return false;
    }

    // box check
    for (int i = 3 * square_x; i < 3 * square_x + 3; i++)
    {
        for (int j = 3 * square_y; j < 3 * square_y + 3; j++)
        {
            if (sudoku[i][j] == sudoku[p.first][p.second])
            {
                if (i != p.first && j != p.second)
                    return false;
            }
        }
    }
    return true;
}

void solve(int n)
{
    if (n == zero)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int p = 0; p < 9; p++)
            {
                cout << sudoku[i][p] << " ";
            }
            cout << "\n";
        }
        flag_found = true;
        return;
    }
    else
    {
        for (int i = 1; i <= 9; i++)
        {
            sudoku[zero_pos[n].first][zero_pos[n].second] = i;
            if (is_valid(zero_pos[n]))
                solve(n + 1);
            if (flag_found)
                return;
        }
        sudoku[zero_pos[n].first][zero_pos[n].second] = 0;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num;
    for (int i = 0; i < 9; i++)
    {
        for (int p = 0; p < 9; p++)
        {
            cin >> num;
            sudoku[i][p] = num;
            if (num == 0)
            {
                zero_pos.push_back({ i,p });
                zero++;
            }
               
        }
    }
    solve(0);    
    return 0;
}