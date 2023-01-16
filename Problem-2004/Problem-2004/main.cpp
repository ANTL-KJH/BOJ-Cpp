/*
* Project Name : Problem-2004
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2004
* Program First Author : JH KIM
* Date of First Write : 2023.01.13
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.13			v1.0			First Write
*/
#include <iostream>
using namespace std;

int find10(int n, int key)
{
	int num = 0;

	for (long  i = key; n / i >= 1; i *= key)
	{
		num += n / i;
	}

	return num;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, r, result = 0;
	int five, two;
	cin >> n >> r;
	
	five = find10(n, 5) - find10(n - r, 5) - find10(r, 5);	// nCr�� 5�� ��� �������ִ��� ���
	two = find10(n, 2) - find10(n - r, 2) - find10(r, 2);	// nCr�� 2�� ��� �������ִ��� ���

	cout << min(five, two) << endl;							// 5�� 2�� ���� ������ ��ŭ 10�� ����

	return 0;
}