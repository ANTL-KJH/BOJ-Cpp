/*
* Project Name : Problem-1037
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1037
* Program First Author : JH KIM
* Date of First Write : 2023.01.10
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.10			v1.0			First Write
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int loop, * factor;
	cin >> loop;
	factor = new int[loop];
	for (int i = 0; i < loop; i++)
	{
		cin >> factor[i];
	}
	sort(factor, factor + loop);
	cout << factor[0] * factor[loop - 1];
	return 0;
}