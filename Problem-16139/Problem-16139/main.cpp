/*
* Project Name : Problem-16139
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-16139
* Program First Author : JH KIM
* Date of First Write : 2023.02.06
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.06			v1.0			First Write
* JH KIM				2023.02.20			v1.1			Modified main
*/
#include <iostream>
#include <string>
#define ALPHABET 26
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	char inputch;
	int question, ch, row, col;
	int** countingMap;
	int qAlphabet, qStart = 0, qEnd = 0, result = 0;
	cin >> str;
	cin >> question;

	countingMap = new int* [ALPHABET];
	for (int i = 0; i < ALPHABET; i++)
	{
		countingMap[i] = new int[str.length()] {};
	}
	
	ch = str[0] - 'a';
	countingMap[ch][0]++;
	for (int i = 1; i < str.length(); i++)
	{
		ch = str[i] - 'a';
		for (int p = 0; p < ALPHABET; p++)
			countingMap[p][i] = countingMap[p][i - 1];
		countingMap[ch][i]++;
	}

	for (int i = 0; i < question; i++)
	{
		cin >> inputch >> qStart >> qEnd;
		qAlphabet = inputch - 'a';
		result = countingMap[qAlphabet][qEnd] - countingMap[qAlphabet][qStart];
		if (str[qStart] == inputch)
			result++;
		cout << result << "\n";
	}

	return 0;
}