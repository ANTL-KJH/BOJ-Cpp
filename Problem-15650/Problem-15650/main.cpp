/*
* Project Name : Problem-15650
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-15650
* Program First Author : JH KIM
* Date of First Write : 2023.01.13
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.13			v1.0			First Write
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 9

vector<int> v;
vector<int>::iterator iter;
int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int cnt)
{
    if (cnt == M)
    {
        if (is_sorted(v.begin(), v.end()))
        {
            iter = v.begin();
            while (iter != v.end())
            {
                cout << *iter <<" ";
                iter++;
            }

            cout << '\n';
        }
        v.pop_back();
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            v.push_back(i);
            dfs(cnt + 1);
            visited[i] = false;
        }
        if (i == N && v.size()>0)       // size check ���� pop_back �ϴ°�� memory error �߻�
            v.pop_back();
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