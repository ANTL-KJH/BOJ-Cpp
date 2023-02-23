/*
* Project Name : Problem-25206
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-25206
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.22			v1.0			First Write
*/

#include <iostream>
#include <string>
#define SCORE_AP 4.5
#define SCORE_A0 4.0
#define SCORE_BP 3.5
#define SCORE_B0 3.0
#define SCORE_CP 2.5
#define SCORE_C0 2.0
#define SCORE_DP 1.5
#define SCORE_D0 1.0
#define SCORE_F 0.0

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string subject, grade;
	double credit, gradeSum = 0.0, creditSum = 0.0;
	for (int i = 0; i < 20; i++)
	{
		cin >> subject >> credit >> grade;
		if (grade == "A+")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_AP;
		}
		else if (grade == "A0")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_A0;
		}
		else if(grade == "B+")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_BP;
		}
		else if (grade == "B0")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_B0;
		}
		else if (grade == "C+")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_CP;
		}
		else if (grade == "C0")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_C0;
		}
		else if (grade == "D+")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_DP;
		}
		else if (grade == "D0")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_D0;
		}
		else if (grade == "F")
		{
			creditSum += credit;
			gradeSum += credit * SCORE_F;
		}
		else if (grade == "P")
		{
			continue;
		}
	}
	cout << fixed;
	cout.precision(6);
	cout << gradeSum / creditSum;
	return 0;
}