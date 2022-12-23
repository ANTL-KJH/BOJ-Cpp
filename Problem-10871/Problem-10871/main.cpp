/*
* Project Name : Problem-10871
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10871
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
	int n, key, count = 0;
	int* i_array;
	cin >> n >> key;
	i_array = (int*)new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> i_array[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (i_array[i] < key)
			cout << i_array[i] << " ";
	}
	delete[]i_array;
	return 0;
}