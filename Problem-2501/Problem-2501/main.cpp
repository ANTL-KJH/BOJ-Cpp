/*
* Project Name : Problem-2501
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2501
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.22			v1.0			First Write
*/

#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K, count=0;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			count++;
		if (count == K)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}