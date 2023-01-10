/*
* Project Name : Problem-2477
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2477
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

	int K_melon, area = 0, new_area = 0, result = 0;
	pair<int, int> line[6];
	cin >> K_melon;
	for (int i = 0; i < 6; i++)
	{
		cin >> line[i].first >> line[i].second;			// first는 dummy값
	}
	// 6각형이므로 사각형의 넓이가 가장 큰 두 변의 반대의 사각형이 넓이에서 빠지는 사각형임
	for (int i = 0; i < 6; i++)
	{
		new_area = line[i].second * line[(i + 1) % 6].second;
		if (new_area > area)
		{
			area = new_area;
			result = (area - (line[(i + 3) % 6].second * line[(i + 4) % 6].second)) * K_melon;
		}
	}
	cout << result;
	return 0;
}