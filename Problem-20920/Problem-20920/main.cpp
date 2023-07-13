/*
* Project Name : Problem-2
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-26069
* Program First Author : JH KIM
* Date of First Write : 2023.07.11
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.11			v1.00			First Write
* JH KIM				2023.07.12			v1.01			Memory error solve
*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int>& e1, pair<string, int>& e2)
{
	if (e1.second == e2.second)
	{
		if (e1.first.length() == e2.first.length())
			return e1.first < e2.first;
		return e1.first.length() > e2.first.length();
	}
	return e1.second > e2.second;
}

int main(void)
{
	cin.sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	string str;
	map<string, int> m;
	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str.size() >= M)
			m[str]++;
		
	}
	vector<pair<string, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), cmp);
	vector<pair<string, int>> ::iterator viter;
	for (viter=vec.begin(); viter!=vec.end();viter++)
		cout << (*viter).first << "\n";
	return 0;
}