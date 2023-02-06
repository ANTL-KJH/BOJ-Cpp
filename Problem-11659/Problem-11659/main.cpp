/*
* Project Name : Problem-11659
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11659
* Program First Author : JH KIM
* Date of First Write : 2023.02.03
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.03			v1.0			First Write
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, start, end, sum, input_num;
	int* num;

	cin >> N >> M;
	num = new int[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> input_num;
		num[i] = num[i - 1] + input_num;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> start >> end;
		cout << num[end]-num[start-1] << "\n";
	}
	return 0;
}