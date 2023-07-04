/*
* Project Name : Problem-17103
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-17103
* Program First Author : JH KIM
* Date of First Write : 2023.06.30
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.30			v1.0			First Write
*/

#include <iostream>
using namespace std;

#define MAX 1000001
bool arr[MAX];
int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = true;
	}
	arr[0] = arr[1] = false;
	for (int i = 2; i * i < MAX; i++)
	{
		if (arr[i])
		{
			for (int j = i * 2; j < MAX; j += i)
				arr[j] = false;
		}
	}
	for (int i = 0; i < T; i++)
	{
		int testNum, count=0;
		cin >> testNum;
		for (int p = 2; p <= testNum / 2; p++)
			if ((arr[p] & arr[testNum - p]) == true)
				count++;
		cout << count <<"\n";
	}
	return 0;
}