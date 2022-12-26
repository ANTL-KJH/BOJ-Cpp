/*
* Project Name : Problem-2675
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2675
* Program First Author : JH KIM
* Date of First Write : 2022.12.26
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.26			v1.0			First Write
*/
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input_string;
	int loop, repeat;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		cin >> repeat >> input_string;
		for (int p = 0; p < input_string.size(); p++)
		{
			for (int q = 0; q < repeat; q++)
			{
				cout << input_string[p];
			}
		}
		cout << endl;
	}
	return 0;
}