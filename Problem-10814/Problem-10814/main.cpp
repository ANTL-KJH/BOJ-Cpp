/*
* Project Name : Problem-10814
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10814
* Program First Author : JH KIM
* Date of First Write : 2022.12.29
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.29			v1.0			First Write
*/
#include <iostream>
#include <vector>
#include <algorithm>			// for sort
using namespace std;

vector <pair<int, string>> person;
bool compare(pair<int, string> p1, pair<int, string> p2)
{
	return p1.first < p2.first;
		
}

int main(void)
{
	// 시간을 줄이기 위해 사용
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	string name;
	int age, numOfpos;
	cin >> numOfpos;
	for (int i = 0; i < numOfpos; i++)
	{
		cin >> age >> name;

		person.push_back({age, name});
	}
	stable_sort(person.begin(), person.end(), compare);			// 순서를 손상시키지 않는 stable_sort사용
	for (int i = 0; i < person.size(); i++)
	{
		cout << person[i].first << " " << person[i].second << '\n';
	}
	return 0;
}