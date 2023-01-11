/*
* Project Name : Problem-2609
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2609
* Program First Author : JH KIM
* Date of First Write : 2023.01.10
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.10			v1.0			First Write
* JH KIM				2023.01.11			v1.1			write gcd func
*/
#include <iostream>
using namespace std;

int gcd(int a, int b)		// ��Ŭ���� ȣ����, a, b ũ�� �񱳴� ��� ����
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
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << "\n";
	cout << a * b / gcd(a, b);			// �ּҰ������ �� ���� �� / �ִ� �����

	return 0;
}