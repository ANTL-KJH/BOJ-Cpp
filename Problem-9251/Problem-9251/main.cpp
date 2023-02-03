/*
* Project Name : Problem-9251
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9251
* Program First Author : JH KIM
* Date of First Write : 2023.02.02
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.02			v1.0			First Write
* JH KIM				2023.02.03			v1.1			Algorithm Modified
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[1001][1001] = { 0, };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string A, B;
	
	cin >> A >> B;
	for (int i = 1; i <= A.size(); i++)
	{
		for (int p = 1; p <= B.size(); p++)
		{
			dp[i][p] = max({ dp[i][p - 1], dp[i - 1][p], dp[i - 1][p - 1] + (A[i-1] == B[p-1]) });
		}
	}

	//		A C	A Y K P
	//		0 0 0 0 0 0
	//	C 0 0 1 1 1 1 1 
	//	A 0 1 1 2 2 2 2
	//	P 0 1 1 2 2 2 3
	//	C 0 1 2 2 2 2 3
	//	A 0 1 2 3 3 3 3
	//	K 0 1 2 3 3 4 4
	cout << dp[A.size()][B.size()];
	

	return 0;
}