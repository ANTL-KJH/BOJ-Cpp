/*
* Project Name : Problem-5073
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-5073
* Program First Author : JH KIM
* Date of First Write : 2023.06.28
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.28			v1.0			First Write
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int length[3], max;
	while (true)
	{
		cin >> length[0] >> length[1] >> length[2];
		sort(length, length+3);
		if (length[2] == 0)
			return 0;
		if (length[0] + length[1] <= length[2])
			cout << "Invalid" << "\n";
		else if (length[0] == length[1] && length[1] == length[2])
			cout << "Equilateral" << "\n";
		else if (length[0] == length[1] || length[1] == length[2])
			cout << "Isosceles" << "\n";
		else
			cout << "Scalene" << "\n";
	}

}