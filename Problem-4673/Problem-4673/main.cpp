/*
* Project Name : Problem-4673
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-4673
* Program First Author : JH KIM
* Date of First Write : 2022.12.23
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.23			v1.0			First Write
*/
#include <iostream>
using namespace std;

int d(int n)
{
	int selfNumber = n + n % 10;
	while (n / 10 != 0)
	{
		selfNumber += (n / 10) % 10;
		n /= 10;
	}
	return selfNumber;
}

int main(void)
{
	bool numbers[10001] = { false, };
	int result;

	for (int i = 1; i < 10001; i++)
	{
		result = d(i);
		if (result < 10001) numbers[result] = true;
	}

	for (int i = 1; i < 10001; i++)
		if (numbers[i] == false)
			cout << i << endl;

	return 0;
}