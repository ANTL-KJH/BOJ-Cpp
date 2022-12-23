/*
* Project Name : Problem-10818
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10818
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
	int n, min, max;
	int* i_array;
	cin >> n;
	i_array = (int*)new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> i_array[i];
	}
	min = i_array[0];
	max = i_array[0];
	for (int i = 1; i < n; i++)
	{
		if (i_array[i] < min)
			min = i_array[i];
		if (i_array[i] > max)
			max = i_array[i];
	}
	delete[]i_array;
	cout << min << " " << max;
	return 0;
}