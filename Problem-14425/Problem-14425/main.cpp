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
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, count = 0;
	string s;
	map<string, bool> m;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		m[s] = true;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> s;
		if (m[s])
			count++;
	}

	cout << count;
	return 0;
}