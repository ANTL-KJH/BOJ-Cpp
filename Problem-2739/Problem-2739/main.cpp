/*
* Project Name : Problem-2739
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2739
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
	int input_num;
	cin >> input_num;
	for (int i = 1; i < 10;i++)
	{
		cout << input_num << " * " << i << " = " << input_num * i << endl;
	}
	return 0;
}