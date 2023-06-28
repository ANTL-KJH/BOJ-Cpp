/*
* Project Name : Problem-2720
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2720
* Program First Author : JH KIM
* Date of First Write : 2023.06.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.27			v1.0			First Write
*/
#include <iostream>
using namespace std;
#define QUATER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1
int main(void)
{
	int T, C;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> C;
		int Q = 0, D = 0, N = 0, P = 0, sum=0;
		while (sum + QUATER <= C)		// 가장 큰 단위인 QUATER부터 최대한 입력
		{
			Q++;
			sum += QUATER;
		}
		while (sum + DIME <= C)
		{
			D++;
			sum += DIME;
		}
		while (sum + NICKEL <= C)
		{
			N++;
			sum += NICKEL;
		}		
		while (sum + PENNY <= C)
		{
			P++;
			sum += PENNY;
		}
		cout << Q << " " << D << " " << N << " " << P << "\n";
	}
	return 0;
}