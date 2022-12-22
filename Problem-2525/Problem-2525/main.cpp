/*
* Project Name : Problem-2525
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2525
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
	int h, m, t;
	cin >> h >> m;
	cin >> t;
	m += t;
	while (1)
	{
		if (m >= 60)
		{
			m -= 60;
			h++;
			if (h >= 24)
				h -= 24;
		}
		else
			break;
	}
	cout << h << " " << m;
	return 0;
}