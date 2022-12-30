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

int fibonacci(int n);

int main(void)
{
	int n;
	cin >> n;
	cout << fibonacci(n);
	return 0;
}

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}