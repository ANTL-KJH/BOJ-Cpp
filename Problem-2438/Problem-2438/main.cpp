/*
* Project Name : Problem-2438
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2438
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
	int loop;
	cin >> loop;

	for (int i = 1; i <= loop; i++)
	{
		for (int p = 0; p < i; p++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}