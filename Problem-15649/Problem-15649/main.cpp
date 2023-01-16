/*
* Project Name : Problem-15649
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-15649
* Program First Author : JH KIM
* Date of First Write : 2023.01.13
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.13			v1.0			First Write
*/
#include <iostream>
using namespace std;
#define MAX 9

int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int cnt)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;           // 출력되는 값을 arr에 입력하는 부분
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
    dfs(0);

	return 0;
}