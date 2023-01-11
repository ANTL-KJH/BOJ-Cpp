/*
* Project Name : Problem-5086
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-5086
* Program First Author : JH KIM
* Date of First Write : 2023.01.10
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.10			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	while (1)
	{
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;
		if ((y > x) && (y % x == 0))
			cout << "factor" << "\n";
		else if ((x > y) && (x % y == 0))
			cout << "multiple" << "\n";

		else
			cout << "neither" << "\n";
	}
	return 0;
}