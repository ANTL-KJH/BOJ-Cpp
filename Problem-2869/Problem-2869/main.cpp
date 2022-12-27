/*
* Project Name : Problem-1193
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2292
* Program First Author : JH KIM
* Date of First Write : 2022.12.26
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.26			v1.0			First Write
*/
// arithmetic progression 등차수열
#include <iostream>
using namespace std;

int main()
{
	int climb_meter = 0, slip_meter = 0, goalHeight = 0;


	cin >> climb_meter >> slip_meter >> goalHeight;

	goalHeight = goalHeight - climb_meter;

	int day = goalHeight / (climb_meter - slip_meter) + 1;
	if (goalHeight % (climb_meter - slip_meter))
		day++;

	cout << day;
	return 0;
}