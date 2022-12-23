/*
* Project Name : Problem-4344
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-4344
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
	int loop = 0, num_student=0, sum, count;
	int* score;
	double avg;

	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		sum = 0;
		count = 0;
		cin >> num_student;
		score = (int*)new int[num_student];
		for (int p = 0; p < num_student; p++)
		{
			cin >> score[p];
			sum += score[p];
		}
		avg = sum / (double)num_student;
		for (int p = 0; p < num_student; p++)
		{
			if ((double)score[p] > avg)
				count++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (count / (double)num_student) * 100 << "%" << endl;
	}
	return 0;
}