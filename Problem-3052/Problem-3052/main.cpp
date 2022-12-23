/*
* Project Name : Problem-3052
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-3052
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
	int remainder[42] = { 0, };
	int input_num, count=0;

	for (int i = 0; i < 10; i++)
	{
		cin >> input_num;
		remainder[input_num % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
	{
		if (remainder[i] == 1)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}