/*
* Project Name : Problem-25314
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-25314
* Program First Author : JH KIM
* Date of First Write : 2023.02.21
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.21			v1.0			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N / 4; i++)
		cout << "long" << " ";
	cout << "int";

	return 0;
}