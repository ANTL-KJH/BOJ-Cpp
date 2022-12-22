/*
* Project Name : Problem-2480
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2480
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
	int a, b, c, prize;
	
	cin >> a >> b >> c;
	if ((a == b) && (b == c))
		prize = 10000 + a * 1000;
	else if (a == b)
		prize = 1000 + a * 100;
	else if (b == c)
		prize = 1000 + b * 100;
	else if (a == c)
		prize = 1000 + a * 100;
	else
	{
		if (a > b && a > c)
			prize = a * 100;
		else if (b > a && b > c)
			prize = b * 100;
		else
			prize = c * 100;
	}
	cout << prize;
	return 0;
}