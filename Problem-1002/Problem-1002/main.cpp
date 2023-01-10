/*
* Project Name : Problem-1002
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1002
* Program First Author : JH KIM
* Date of First Write : 2023.01.10
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.10			v1.0			First Write
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int loop, x1, y1, r1, x2, y2, r2;
	double distance, r_distance;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		if (distance == 0)
		{
			if ((r1 - r2) == 0)
				cout << "-1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (distance == (r1 + r2) || distance == abs(r1 - r2))
			cout << "1" << "\n";
		else if (distance < (r1 + r2) && distance > abs(r1 - r2))
			cout << "2" << "\n";
		else
			cout << "0" << "\n";
	}
	return 0;
}