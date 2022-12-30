/*
* Project Name : Problem-10872
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10872
* Program First Author : JH KIM
* Date of First Write : 2022.12.30
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.30			v1.0			First Write
*/

#include <iostream>
using namespace std;

int factorial(int n);

int main(void)
{
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}

int factorial(int n)
{
	if (n > 2)
	{
		n = n * factorial(n - 1);
	}
	else if (n == 0)
	{
		return 1;
	}
	return n;						// 1!은 자동으로 1이 반환
}