/*
* Project Name : Problem-10101
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10101
* Program First Author : JH KIM
* Date of First Write : 2023.06.28
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.28			v1.0			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	int angle[3];
	cin >> angle[0] >> angle[1] >> angle[2];

	if (angle[0]+angle[1]+angle[2] == 180)
	{
		if (angle[0] == angle[1] && angle[1] == angle[2])
			cout << "Equilateral";
		else if (angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2])
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
	{
		cout << "Error";
	}
	return 0;
}