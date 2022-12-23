/*
* Project Name : Problem-11022
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11022
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
	int loop, a, b;
	cin >> loop;

	for (int i = 1; i <= loop; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a <<" + "<< b<<" = " << a + b << '\n';
	}
	return 0;
}