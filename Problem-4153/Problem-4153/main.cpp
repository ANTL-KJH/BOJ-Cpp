/*
* Project Name : Problem-4153
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-4153
* Program First Author : JH KIM
* Date of First Write : 2023.01.09
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.09			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int x, y, z, temp;
	while (1)
	{
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			return 0;

		if (x > y)
		{
			temp = y;
			y = x;
			x = temp;
		}
		if (y > z)
		{
			temp = z;
			z = y;
			y = temp;
		}

		if (z * z == x * x + y * y)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
    return 0;
}