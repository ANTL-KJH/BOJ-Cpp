/*
* Project Name : Problem-15439
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-15439
* Program First Author : JH KIM
* Date of First Write : 2023.07.05
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.05			v1.00			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	if (N == 1)
	{
		cout << 0;
		return 0;
	}
	cout << N * (N - 1);
	return 0;
}