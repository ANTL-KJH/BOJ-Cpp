/*
* Project Name : Problem-9506
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9506
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
*   ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.22			v1.0			First Write
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n = 0, sum = 0, count = 0;
	vector<int> divArr;
	while (1)
	{
		sum = 0;
		count = 0;
		cin >> n;
		if (n == -1)
			break;
		
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				divArr.push_back(i);
				count++;
			}
		}
		if (n == sum)
		{
			cout << n << " = ";
			for (int p = 0; p < divArr.size(); p++)
			{
				cout << divArr[p];
				if (p + 1 == divArr.size())
					break;
				cout << " + ";
			}
			cout << "\n";
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
		divArr.clear();
	}
	return 0;
}