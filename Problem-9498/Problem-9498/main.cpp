/*
* Project Name : Problem-9498
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9498
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
	int score;
	cin >> score;
	if (score >= 90)
		cout << "A";
	else if (score < 90 && score >= 80)
		cout << "B";
	else if (score < 80 && score >= 70)
		cout << "C";
	else if (score < 70 && score >= 60)
		cout << "D";
	else
		cout << "F";
	return 0;
}