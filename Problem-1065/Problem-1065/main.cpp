/*
* Project Name : Problem-1065
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1065
* Program First Author : JH KIM
* Date of First Write : 2022.12.23
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.23			v1.0			First Write
*/
// arithmetic progression 등차수열

#include <iostream>
using namespace std;

bool isArithmetic(int n)
{
	int arr[3] = { 0, };
	int diff1, diff2;

	if (n < 100)
		return true;
	arr[2] = n / 100;
	arr[1] = (n % 100) / 10;
	arr[0] = n % 10;


	diff1 = arr[1] - arr[0];
	diff2 = arr[2] - arr[1];

	if (diff1 == diff2)
		return true;
	return false;
}


int main(void)
{
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (isArithmetic(i))
			count++;
	}
	cout << count << endl;
}