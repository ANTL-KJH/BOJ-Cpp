/*
* Project Name : Problem-11650
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11650
* Program First Author : JH KIM
* Date of First Write : 2022.12.29
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.29			v1.0			First Write
*/
#include <iostream>
#include <vector>
#include <algorithm>			// for sort
using namespace std;

vector <pair<int, int>> v;
int main(void)
{
    // 시간을 줄이기 위해 사용
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int numOfpos, x, y;
    cin >> numOfpos;
	for (int i = 0; i < numOfpos; i++)
	{
		cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < numOfpos; i++)
	{
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
    return 0;
}