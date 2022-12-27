/*
* Project Name : Problem-2839
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2839
* Program First Author : JH KIM
* Date of First Write : 2022.12.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.27			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n;
	x = n / 5;
	while (1)
	{
		if (x < 0)
		{
			cout << -1;
			return 0;
		}
		for (int i = 0; i < 5; i++)			// 5kg 설탕봉지를 기준으로 계산
		{
			if (n == (5 * x + 3 * i))
			{
				cout << x + i;
				return 0;
			}
		}
		x--;
	}
}