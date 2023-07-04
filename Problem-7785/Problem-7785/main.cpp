/*
* Project Name : Problem-7785
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-7785
* Program First Author : JH KIM
* Date of First Write : 2023.06.29
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.29			v1.0			First Write
*/

#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	int N;
	string name, info;
	cin >> N;
	map<string, bool> employee;
	for (int i = 0; i < N; i++)
	{
		cin >> name >> info;
		if (info == "enter")
			employee[name] = true;
		else if (info == "leave")
			employee[name] = false;
	}
	map<string, bool> ::iterator iter = employee.end();	// map의 끝에서 시작
	iter--;	// end는 비어있으므로 앞으로 한칸 이동
	while(true)
	{
		if (iter->second == true)
			cout << iter->first << "\n";
		if (iter == employee.begin())
			break;
		iter--;
	}
	
	return 0;
}