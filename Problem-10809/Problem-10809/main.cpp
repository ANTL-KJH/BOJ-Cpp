/*
* Project Name : Problem-10809
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10809
* Program First Author : JH KIM
* Date of First Write : 2022.12.26
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.26			v1.0			First Write
*/
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input_string;
	int alphabet[26];
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = -1;				// init array to -1
	}
	cin >> input_string;
	for (int i = 0; i < input_string.size(); i++)
	{
		if(alphabet[(int)input_string[i] - 97]== -1)
			alphabet[(int)input_string[i]-97] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << " ";
	}
	return 0;
}