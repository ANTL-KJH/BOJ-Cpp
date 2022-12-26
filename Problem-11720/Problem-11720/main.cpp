/*
* Project Name : Problem-11720
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11720
* Program First Author : JH KIM
* Date of First Write : 2022.12.26
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.26			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int num, sum = 0;
	cin >> num;
	char* c_array;
	c_array = new char[num];
	cin >> c_array;
	for (int i = 0; i < num; i++)
	{
		sum += (int)c_array[i]-48;	// ASCII CODE 48 => number 0
	}
	cout << sum;
	return 0;
}