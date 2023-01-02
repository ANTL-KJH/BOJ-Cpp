/*
* Project Name : Problem-2231
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2231
* Program First Author : JH KIM
* Date of First Write : 2023.01.02
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.02			v1.0			First Write
*/
#include <stdio.h>

int main(void)
{
	int targetNum, sum=0, temp=0, lds=0;		// lds = lowest decomposition sum
	scanf("%d", &targetNum);
	for (int i = targetNum; i >= 0; i--)
	{
		sum = i;
		temp = i;
		while (1)
		{
			sum += temp % 10;
			temp /= 10;
			if ((temp / 10 == 0) && (temp % 10 == 0))
				break;
		}
		if (sum == targetNum)
		{
			lds = i;
		}
	}
	printf("%d", lds);
	return 0;
}