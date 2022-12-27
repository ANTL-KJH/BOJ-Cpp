/*
* Project Name : Problem-2941
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2941
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
#include <regex>
using namespace std;

int main()
{
    int count = 0;
    string cro_alphabet;
    cin >> cro_alphabet;
    cro_alphabet = regex_replace(cro_alphabet, regex("c="), "@");
    cro_alphabet = regex_replace(cro_alphabet, regex("c-"), "@");
    cro_alphabet = regex_replace(cro_alphabet, regex("dz="), "@");
    cro_alphabet = regex_replace(cro_alphabet, regex("d-"), "@");
    cro_alphabet = regex_replace(cro_alphabet, regex("lj"), "@");
    cro_alphabet = regex_replace(cro_alphabet, regex("nj"), "@");
    cro_alphabet = regex_replace(cro_alphabet, regex("s="), "@");
    cro_alphabet = regex_replace(cro_alphabet, regex("z="), "@");
    cout << cro_alphabet.size();
    return 0;
}

/*int main()
{
	string s;
	cin >> s;
	int total = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'c' && i + 1 < s.size() && (s[i + 1] == '=' || s[i + 1] == '-')) {
			i++;
		}
		else if ((s[i] == 's' || s[i] == 'z') && i + 1 < s.size() && s[i + 1] == '=') {
			i++;
		}
		else if ((s[i] == 'l' || s[i] == 'n') && i + 1 < s.size() && s[i + 1] == 'j') {
			i++;
		}
		else if (s[i] == 'd' && i + 1 < s.size() && s[i + 1] == '-') {
			i++;
		}
		else if (s[i] == 'd' && i + 2 < s.size() && s[i + 1] == 'z' && s[i + 2] == '=') {
			i = i + 2;
		}
		total++;
	}
	cout << total;
	return 0;
}*/