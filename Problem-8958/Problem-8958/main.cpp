/*
* Project Name : Problem-8958
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-8958
* Program First Author : JH KIM
* Date of First Write : 2022.12.23
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.23			v1.0			First Write
*/
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int loop = 0, count = 0, total_score, score;
	string answer;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		count = 0;
		total_score = 0;
		score = 0;
		cin >> answer;
		for (int p = 0; p < answer.length(); p++)
		{
			if (answer[p] == 'O')
			{
				score++;
				total_score += score;
			}
			else
				score = 0;
		}
		cout << total_score << endl;
	}
	return 0;
}