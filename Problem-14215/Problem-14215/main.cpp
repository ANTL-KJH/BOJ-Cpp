/*
* Project Name : Problem-14215
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-14215
* Program First Author : JH KIM
* Date of First Write : 2023.06.28
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.28			v1.0			First Write
*/

#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void)
{
	int length[3], sum;
	cin >> length[0] >> length[1] >> length[2];
	sort(begin(length), end(length));
	if (length[2] >= length[0] + length[1])
		length[2] = length[0] + length[1] - 1;
	sum = accumulate(begin(length), end(length),0);
	cout << sum;
	return 0;
}