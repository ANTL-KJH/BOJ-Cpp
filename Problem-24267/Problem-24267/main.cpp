/*
* Project Name : Problem-24267
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-24267
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
	
	cin >> n;
	
	cout << n * (n - 1) * (n - 2) / 6 << "\n" << 3;

	return 0;
}