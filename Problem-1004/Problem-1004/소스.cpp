/*
* Project Name : Problem-1004
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1004
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

	int loop, x1, y1, x2, y2;
	int planet, px, py, pr;
	int departure, enter;
	double distance_1, distance_2;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		departure = 0;
		enter = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> planet;
		for (int p = 0; p < planet; p++)
		{
			cin >> px >> py >> pr;
			distance_1 = sqrt((px - x1) * (px - x1) + (py - y1) * (py - y1));
			distance_2 = sqrt((px - x2) * (px - x2) + (py - y2) * (py - y2));

			if (distance_1 < pr)		// 행성계와의 거리가 반지름보다 작으면 이미 들어와있는 case
				if (distance_2 > pr)
					departure++;

			if (distance_1 > pr)
				if (distance_2 < pr)	// 도착지가 행성계 안에 있어서 들어가야하는 case
					enter++;
		}
		cout << departure + enter << "\n";
	}
	return 0;
}