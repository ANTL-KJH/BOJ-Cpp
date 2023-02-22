/*
* Project Name : Problem-10986
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10986
* Program First Author : JH KIM
* Date of First Write : 2023.02.20
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.20			v1.0			First Write
* JH KIM				2023.02.21			v1.1			Datatype changed 
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long sum = 0, ans = 0, x = 0;
	long long* cnt;
	int N, M;
	
	cin >> N >> M;

	cnt = new long long [M] {};

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		sum += x;
		cnt[sum % M]++;
	}

	for (int i = 0; i <M; i++)
	{
		ans += cnt[i] * (cnt[i] - 1) / 2;
	}

	cout << ans + cnt[0];

	delete[] cnt;
	return 0;
}