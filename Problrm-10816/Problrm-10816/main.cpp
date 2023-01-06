/*
* Project Name : Problem-10816
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10816
* Program First Author : JH KIM
* Date of First Write : 2023.01.06
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.06			v1.0			First Write
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, input_num;
	int* num_arr;
	map <int, int> card_map;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> input_num;
		card_map[input_num]++;
	}
	cin >> M;
	num_arr = new int[M];
	for (int i = 0; i < M; i++)
	{
		cin >> num_arr[i];
	}
	for (int i = 0; i < M; i++)
	{
		cout << card_map[num_arr[i]] << " ";
	}
	return 0;
}