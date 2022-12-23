/*
* Project Name : Problem-1110
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1110
* Program First Author : JH KIM
* Date of First Write : 2022.12.23
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.23			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int a, temp_1, temp_10, result_1, result, count = 0;
	cin >> a;
	temp_1 = a % 10;
	temp_10 = a / 10;
	while (1)
	{
		result_1 = temp_1 + temp_10;
		result_1 = result_1 % 10;
		result = temp_1*10 + result_1;
		count++;
		if (result == a)
			break;
		temp_1 = result % 10;
		temp_10 = result / 10;

	}
	cout << count;
	return 0;
}