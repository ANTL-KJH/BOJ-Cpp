/*
* Project Name : Problem-15652
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-15652
* Program First Author : JH KIM
* Date of First Write : 2023.01.16
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.16			v1.0			First Write
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
        if (is_sorted(v.begin(), v.end()))      // sorting check
        {
            iter = v.begin();
            while (iter != v.end())
            {
                cout << *iter << " ";
                iter++;
            }
            cout << '\n';
        }
        v.pop_back();
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        v.push_back(i);
        dfs(cnt + 1);
        if (i == N && v.size() > 0)       // size check 없이 pop_back 하는경우 memory error 발생
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