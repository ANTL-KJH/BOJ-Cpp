/*
* Project Name : Problem-1436
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1436
* Program First Author : JH KIM
* Date of First Write : 2023.01.05
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.05			v1.0			First Write
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, count = 0, num = 665, count_6, temp;
	cin >> n;
	while (count != n)
	{
		count_6 = 0;
		num++;
		temp = num;
		while (temp > 0)
		{
			if (temp % 10 == 6)
				count_6++;
			else if (temp % 10 != 6)		// 6�� �������� 3�� �߻����� ������� �ʱ�ȭ
				count_6 = 0;
			if (count_6 >= 3)
			{
				count++;
				break;
			}
			temp /= 10;
		}
		
	}
	cout << num;
	return 0;
}