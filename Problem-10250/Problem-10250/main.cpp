/*
* Project Name : Problem-10250
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10250
* Program First Author : JH KIM
* Date of First Write : 2022.12.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.27			v1.0			First Write
*/
// arithmetic progression 등차수열
#include <iostream>
using namespace std;

int main()
{
	int test, floor, room, N, roomNumber, floorNumber;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> floor >> room >> N;
		roomNumber = N / floor+1;
		floorNumber = N % floor;
		if (floorNumber == 0)						// 나머지가 0인 case
		{
			floorNumber = floor;
			roomNumber--;
			if (roomNumber == 0)
			{
				roomNumber = room;
			}
		}
		if (roomNumber >= 10)
		{
			cout << floorNumber << roomNumber << endl;
		}
		else
			cout << floorNumber<< 0 << roomNumber << endl;

	}
	return 0;
}