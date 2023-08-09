/*
* Project Name : Problem-27433
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-27433
* Program First Author : JH KIM
* Date of First Write : 2023.08.09
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.09			v1.00			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int N;
	long long result = 1;
	cin >> N;

	for (int i = 2; i <= N; i++)
	{
		result *= i;
	}
	cout << result;
	return 0;
}