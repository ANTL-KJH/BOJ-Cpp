/*
* Project Name : Problem-13909
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-13909
* Program First Author : JH KIM
* Date of First Write : 2023.07.04
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.04			v1.00			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	int N, count=0;
	cin >> N;
	while (1)
	{
		if ((count + 1) * (count + 1) > N)
			break;
		count++;
	}
	cout << count;
	return 0;
}