/*
* Project Name : Problem-1934
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1934
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

int gcd(int a, int b)		// 유클리드 호제법, a, b 크기 비교는 상관 없음
{
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int loop, a, b;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		cin >> a >> b;
		cout << a * b / gcd(a, b) << "\n";
	}
	return 0;
}