/*
* Project Name : Problem-10950
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10950
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
	int loop,a, b;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		cin >> a>> b;
		cout << a + b << endl;
	}

	return 0;
}