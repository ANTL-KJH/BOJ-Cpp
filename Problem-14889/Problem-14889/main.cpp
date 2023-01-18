/*
* Project Name : Problem-14888
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-14888
* Program First Author : JH KIM
* Date of First Write : 2023.01.17
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.17			v1.0			First Write
*/
#include <iostream>
#include <limits.h>
using namespace std;

int N, ** player;
int min = INT_MAX;
bool selected[20];
void startlink(int n, int pos)
{
    if (n == N / 2)
    {
        int team_start, team_link;
        team_start = 0;
        team_link = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (selected[i] == true && selected[j] == true) team_start += player[i][j];
                if (selected[i] == false && selected[j] == false) team_link += player[i][j];
            }
        }

        int temp = abs(team_start - team_link);
        if (::min > temp)
            ::min = temp;

        return;
    }
    else
    {
        for (int i = pos; i < N; i++)
        {
            selected[i] = true;
            startlink(n + 1, i + 1);
            selected[i] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    player = new int* [N];
    for (int i = 0; i < N; i++)
    {
        player[i] = new int[N];
    }
    for (int i = 0; i < N; i++)
    {
        for (int p = 0; p < N; p++)
        {
            cin >> player[i][p];
        }
    }
    startlink(0, 0);
    cout << ::min;
    
    // Dynamic Memory free
    for (int i = 0; i < N; i++)
        delete[] player[i];
    delete player;
    return 0;
}