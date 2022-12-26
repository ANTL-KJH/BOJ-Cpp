/*
* Project Name : Problem-1157
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1157
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
	int alphabet[26] = { 0, }, max, max_idx, max_count;
	string input_string;
	cin >> input_string;
	for (int i = 0; i < input_string.size(); i++)
	{
		if (input_string[i] >= 65 && input_string[i] <= 90)
			alphabet[input_string[i] - 65]++;
		else if (input_string[i] >= 97 && input_string[i] <= 122)
			alphabet[input_string[i] - 97]++;
	}
	max = alphabet[0];
	max_idx = 0;
	for (int i = 1; i < 26; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			max_idx = i;
		}
	}
	max_count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == max)
			max_count++;
	}
	if (max_count >= 2)
		cout << "?";
	else if (max_count == 1)
		cout << (char)(max_idx+65);
	return 0;
}