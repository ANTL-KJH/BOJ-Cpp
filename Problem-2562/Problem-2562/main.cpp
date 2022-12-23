/*
* Project Name : Problem-2562
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2562
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
	int i_array[9] = { 0, }, max, max_idx;
	for (int i = 0; i < 9; i++)
	{
		cin >> i_array[i];
	}
	max = i_array[0];
	for (int i = 0; i < 9; i++)
	{
		if (max <= i_array[i])
		{
			max = i_array[i];
			max_idx = i + 1;
		}
	}
	cout << max << endl << max_idx;
	return 0;
}