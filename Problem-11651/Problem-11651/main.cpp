/*
* Project Name : Problem-1181
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1181
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

vector <string> s_vector;
bool compare(string s1, string s2)
{
	if (s1.length() == s2.length())
		return s1 < s2;
	return s1.length() < s2.length();
}

int main(void)
{
	// 시간을 줄이기 위해 사용
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	string input_str;
	int numOfpos;
	cin >> numOfpos;
	for (int i = 0; i < numOfpos; i++)
	{
		cin >> input_str;
		if(find(s_vector.begin(), s_vector.end(), input_str) == s_vector.end())	// 중복되지 않는 경우에만 입력
			s_vector.push_back(input_str);
	}
	sort(s_vector.begin(), s_vector.end(), compare);			// sort에 compare함수 추가
	for (int i = 0; i < s_vector.size(); i++)
	{
		cout << s_vector[i] << '\n';
	}
	return 0;
}