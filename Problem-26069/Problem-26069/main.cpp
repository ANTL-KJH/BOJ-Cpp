/*
* Project Name : Problem-26069
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-26069
* Program First Author : JH KIM
* Date of First Write : 2023.07.05
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.05			v1.00			First Write
*/

#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	int N, cnt = 0;
	bool flag = false;
	string str1, str2;
	map <string, bool> nm;
	map<string, bool> ::iterator iter;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str1 >> str2;
		if (str1 == "ChongChong" || str2 == "ChongChong")
		{
			flag = true;
			nm[str1] = true;
			nm[str2] = true;
		}
		if (nm[str1])
		{
			nm[str2] = true;
		}
		else if (nm[str2])
		{
			nm[str1] = true;
		}
	}

	for (iter= nm.begin(); iter != nm.end(); iter++)
		if ((*iter).second)
			cnt++;
	cout << cnt;
	return 0;
}