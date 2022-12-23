/*
* Project Name : Problem-10951
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10951
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
	int a, b;
	while (!(cin >> a >> b).eof())
	{
		if (a != 0 || b != 0)
			cout << a + b << endl;
		else
			break;
	}
	return 0;
}