/*
* Project Name : Problem-2798
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2798
* Program First Author : JH KIM
* Date of First Write : 2023.01.02
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.02			v1.0			First Write
*/
#include <iostream>
#include <stdio.h>
int main(void)
{
	int numOfcard, targetNum, result =0, * card_array;
	scanf("%d %d", &numOfcard, &targetNum);
	card_array = (int*)calloc(sizeof(int), numOfcard);
	for (int i = 0; i < numOfcard; i++)
	{
		scanf("%d", &card_array[i]);
	}

	for (int i = 0; i < numOfcard; i++)
	{
		for (int p = i + 1; p < numOfcard; p++)
		{
			for (int q = p + 1; q < numOfcard; q++)
			{
				if (card_array[i] + card_array[p] + card_array[q] <= targetNum && card_array[i] + card_array[p] + card_array[q] > result)
				{
					result = card_array[i] + card_array[p] + card_array[q];
				}
				if (result == targetNum)
					break;
			}
		}
	}
	printf("%d", result);
	return 0;
}