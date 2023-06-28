/*
* Project Name : Problem-2903
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2903
* Program First Author : JH KIM
* Date of First Write : 2023.06.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.27			v1.0			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
	int N, mul = 1, result = 2;

	cin >> N;
	
	for (int i = 0; i < N; i++)	// 2->3->5->9->17->33으로 1,2,4,8,16만큼 증가
	{
		result += mul;
		mul *= 2;
	}
	cout << result * result;
	return 0;
}