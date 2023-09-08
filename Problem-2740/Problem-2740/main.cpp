/**
* Project Name : Problem-2740
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2740
* Program First Author : JH KIM
* Date of First Write : 2023.09.08
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.09.08			v1.00			First Write
*/
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> m1;
vector<vector<int>> m2;
vector<vector<int>> m3;
void mulMtrx()
{
	for (int r = 0; r < m1.size(); r++)
	{
		vector<int> tmp;
		for (int t = 0; t < m2[0].size(); t++)
		{
			int sum = 0;
			for (int c = 0; c < m1[0].size(); c++)
			{
				sum += m1[r][c] * m2[c][t];
			}
			tmp.push_back(sum);
		}
		m3.push_back(tmp);
	}
}

int main(void)
{
	int N, K, num;
	cin >> N >> K;
	for (int r = 0; r < N; r++)
	{
		vector<int> tmp;
		for (int c = 0; c < K; c++)
		{
			cin >> num;
			tmp.push_back(num);
		}
		m1.push_back(tmp);
	}
	cin >> N >> K;
	for (int r = 0; r < N; r++)
	{
		vector<int> tmp;
		for (int c = 0; c < K; c++)
		{
			cin >> num;
			tmp.push_back(num);
		}
		m2.push_back(tmp);
	}
	mulMtrx();
	for (int r = 0; r < m3.size(); r++)
	{
		for (int c = 0; c < m3[0].size(); c++)
			cout << m3[r][c] << " ";
		cout << "\n";
	}

	return 0;
}
