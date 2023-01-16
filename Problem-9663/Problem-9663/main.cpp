/*
* Project Name : Problem-9663
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9663
* Program First Author : JH KIM
* Date of First Write : 2023.01.16
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.16			v1.0			First Write
*/
#include <iostream>
using namespace std;

int N, answer = 0;
int visited[15];

bool is_valid(int n)
{
    for (int i = 0; i < n; i++)
        if (visited[n] == visited[i] || n - i == abs(visited[n] - visited[i]))  // col, ´ë°¢¼± check
            return 0;

    return 1;
}

void N_Queen(int n)
{
    if (n == N)
    {
        answer++;
        return;
    }

    for (int j = 0; j < N; j++)
    {
        visited[n] = j;
        if (is_valid(n))
            N_Queen(n + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    N_Queen(0);
    cout << answer;
    return 0;
}