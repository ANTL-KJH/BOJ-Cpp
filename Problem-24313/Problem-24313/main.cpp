/*
* Project Name : Problem-24313
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-24313
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

	int a1, a0, c, n0;
	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	cout << ((a1 * n0 + a0 <= c * n0) && (c - a1 >= 0));

	return 0;
}