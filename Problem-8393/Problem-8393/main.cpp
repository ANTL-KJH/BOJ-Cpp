/*
* Project Name : Problem-8393
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-8393
* Program First Author : JH KIM
* Date of First Write : 2022.12.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.22			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int input_num, result;
	cin >> input_num;
	result = 0;
	for (int i = 0; i<=input_num; i++)
	{
		result += i;
	}
	cout << result;
	return 0;
}