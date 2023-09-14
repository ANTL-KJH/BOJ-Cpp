/**
* Project Name : Problem-11444
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11444
* Program First Author : JH KIM
* Date of First Write : 2023.09.12
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.09.12			v1.00			First Write
*/

#include<iostream>
#include<vector>
using namespace std;

#define MOD 1000000007

long long n;

void multiple(vector<vector<long long>>& a, vector<vector<long long>>& b)
{
	vector<vector<long long>> result;

	for (int r = 0; r < 2; r++)
	{
		vector<long long> tmp;
		for (int c = 0; c < 2; c++)
		{
			long long sum = 0;
			for (int k = 0; k < 2; k++)
				sum += a[r][k] * b[k][c];
			tmp.push_back(sum % MOD);
		}
		result.push_back(tmp);
	}
	a = result;
}

int main()
{
	cin >> n;

	vector<vector<long long>> ans = { {1,0}, {0,1} };
	vector<vector<long long>> a = { {1,1}, {1,0} };

	while (n > 0)
	{
		if (n % 2 == 1)
			multiple(ans, a);
		multiple(a, a);
		n /= 2;
	}

	cout << ans[0][1] << '\n';
}