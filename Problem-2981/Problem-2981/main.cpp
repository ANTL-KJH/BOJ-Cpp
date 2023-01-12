/*
* Project Name : Problem-2981
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2981
* Program First Author : JH KIM
* Date of First Write : 2023.01.11
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.11			v1.0			First Write
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b)		// 유클리드 호제법, a, b 크기 비교는 상관 없음
{
	int c = a % b;
	while (c != 0) 
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> sol;
	vector<int>::iterator itor;

	int loop, * n_array, temp, count = 0;
	cin >> loop;
	n_array = new int[loop];
	for (int i = 0; i < loop; i++)
	{
		cin >> n_array[i];
	}
	sort(n_array, n_array + loop);
	temp = n_array[1] - n_array[0];			// arr[i] - arr[i-1] = 나누는 수 * (몫[i] - 몫[i-1]) + 나머지 - 나머지 = 나누는 수 * (몫[i] - 몫[i-1])
	for (int i = 2; i < loop; i++)
	{
		temp = gcd(temp, n_array[i] - n_array[i - 1]);
	}
	for (int i = 2; i * i <= temp; i++) 
	{
		if (temp % i == 0)
		{
			sol.push_back(i);
			if (i * i != temp)
				sol.push_back(temp / i);
		}
	}
	sol.push_back(temp);
	sort(sol.begin(), sol.end());
	itor = sol.begin();
	while (itor != sol.end())
	{
		cout << *itor << " ";
		itor++;
	}
	delete[] n_array;
	return 0;
}