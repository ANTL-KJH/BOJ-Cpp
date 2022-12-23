/*
* Project Name : Problem-5597
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-5597
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
	int i_array[30] = { 0, };
	int input_num;

	for (int i = 0; i < 28; i++)
	{
		cin >> input_num;
		i_array[input_num-1] = 1;
	}
	for (int i = 0; i < 30; i++)
	{
		if (i_array[i] != 1)
		{
			cout << i + 1<<endl;
		}
	}
	return 0;
}