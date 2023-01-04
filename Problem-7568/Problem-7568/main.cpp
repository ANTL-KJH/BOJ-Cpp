/*
* Project Name : Problem-7568
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-7568
* Program First Author : JH KIM
* Date of First Write : 2023.01.02
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.02			v1.0			First Write
*/
#include <stdio.h>
#include <vector>							// for pair
using namespace std;

int main(void)
{
	int nop, weight, height, count = 0;		// number of person
	scanf("%d", &nop);

	pair<int, int>* people = new pair<int, int>[nop];
	for (int i = 0; i < nop; i++)
	{
		scanf("%d %d", &people[i].first, &people[i].second);
	}

	for (int i = 0; i < nop; i++)
	{
		count = 1;
		for (int j = 0; j < nop; j++)
		{
			if (people[i].first < people[j].first && people[i].second < people[j].second) {
				count++;
			}
		}
		printf("%d ", count);
	}
	return 0;
}