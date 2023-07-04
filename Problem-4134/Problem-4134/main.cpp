/*
* Project Name : Problem-4134
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-4134
* Program First Author : JH KIM
* Date of First Write : 2023.07.03
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.03			v1.00			First Write
* JH KIM				2023.07.04			v1.01			include cmath
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int T;
	unsigned int n;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		unsigned int tmp = n;
		bool flag = false;
		while (1)
		{
			for (int j = 2; j <= int(sqrt(tmp)); j++)
			{
				if (tmp % j == 0)
					break;
				if (j == (int(sqrt(tmp))))
					flag = true;
			}
			if (tmp == 2 || tmp == 3)
				flag = true;
			if (flag == true)
			{
				cout << tmp << "\n";
				break;
			}
			tmp++;
		}
	}
	return 0;
}