/*
* Project Name : Problem-9012
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9012
* Program First Author : JH KIM
* Date of First Write : 2023.07.13
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.13			v1.00			First Write
* JH KIM				2023.07.17			v1.01			data structure changed stack->string
*/

#include <iostream>
#include <stack>
using namespace std;


bool isCorrectString(string str)
{
	int cnt = 0;
	for (int i = str.size()-1; i >=0; i--)
	{
		if (str[i] == ')')
			cnt++;
		else
			cnt--;
		if (cnt < 0)
			return false;
	}
	if (cnt != 0)
	{
		return false;
	}
	return true;
}

int main(void)
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<char> s;
	int T;
	string str;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> str;
		bool result = isCorrectString(str);
		if (result == true)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}