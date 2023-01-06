/*
* Project Name : Problem-10815
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10815
* Program First Author : JH KIM
* Date of First Write : 2023.01.05
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.05			v1.0			First Write
* JH KIM				2023.01.06			v1.1			Error modified
*/
#include <iostream>
#include <map>
#include <string>
#include<sstream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	map <string, int> pokemon;
	int N, M;
	string s, * arr;

	cin >> N >> M;
	arr = new string[N+1];
	for (int i = 1; i <= N; i++)
	{
		cin >> s;
		arr[i] = s;
		pokemon.insert({ s,i });
	}
	for (int i = 0; i < M; i++)
	{
		cin >> s;
		if (s[0] >= '0' && s[0] <= '9')
			cout << arr[stoi(s)] << "\n";
		else
			cout << (int)(pokemon.find(s)->second) << "\n";
	}
	delete[] arr;
	return 0;
}