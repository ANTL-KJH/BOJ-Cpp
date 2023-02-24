/*
* Project Name : Problem-24265
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-24265
* Program First Author : JH KIM
* Date of First Write : 2023.02.23
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.23			v1.0			First Write
*/

#include <iostream>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n;
	long long cnt = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
		cnt += i;
	cout << cnt << "\n" << 2;

	return 0;
}