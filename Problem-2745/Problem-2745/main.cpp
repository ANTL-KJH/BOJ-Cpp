/*
* Project Name : Problem-2745
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2745
* Program First Author : JH KIM
* Date of First Write : 2023.06.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.27			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int B = 0, sum = 0;
	string N;

	cin >> N >> B;
	for (int i = 0; i < N.size(); i++)
	{
		if (N[i] >= '0' && N[i] <= '9')		// 0~9
			sum = sum * B + (N[i] - '0');
		else								// alphabet
			sum = sum * B + (N[i] - 'A' + 10);	// A는 10부터 시작
	}
	cout << sum;
	return 0;
}