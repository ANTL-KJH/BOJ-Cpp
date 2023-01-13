/*
* Project Name : Problem-1010
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1010
* Program First Author : JH KIM
* Date of First Write : 2023.01.11
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.11			v1.0			First Write
*/
#include <iostream>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int loop, left, right;
	long long result = 1;
	int d = 1;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		result = 1;
		d = 1;
		cin >> left >> right;
		for (int p = right; p > right - left; p--)
		{
			result *= p;				// n!/r!
			result /= d++;				// /(n-r)!
		}
		cout << result << "\n";
	}

	return 0;
}