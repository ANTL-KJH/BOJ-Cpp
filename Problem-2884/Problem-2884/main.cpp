/*
* Project Name : Problem-2884
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2884
* Program First Author : JH KIM
* Date of First Write : 2022.12.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.22			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int hour, min;
	cin >> hour >> min;
	min -= 45;
	if (min < 0)
	{
		min += 60;
		hour--;
		if (hour < 0)
			hour += 24;
	}
	cout << hour << " " << min;
	return 0;
}