/*
* Project Name : Problem-11005
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11005
* Program First Author : JH KIM
* Date of First Write : 2023.06.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.27			v1.0			First Write
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N, B, remainder, count=0;
	string result;
	cin >> N >> B;
	while (N / B != 0 || N % B != 0)
	{
		remainder = N % B;
		if (remainder >= 0 && remainder <= 9)	// 0~9
		{
			string tmp = to_string(char(remainder));
			result = tmp + result;
		}
		else									// A~Z
		{
			remainder = remainder - 10 + 'A';
			char c = char(remainder);
			result = c + result;
		}
		N = N / B;

	}
	cout << result;
	return 0;
}