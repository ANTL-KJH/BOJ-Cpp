/*
* Project Name : Problem-14681
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-14681
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
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0)
		cout << 1;
	else if (x < 0 && y>0)
		cout << 2;
	else if (x < 0 && y < 0)
		cout << 3;
	else if (x > 0 && y < 0)
		cout << 4;
	return 0;
}