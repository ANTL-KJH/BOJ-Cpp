/*
* Project Name : Problem-13305
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-13305
* Program First Author : JH KIM
* Date of First Write : 2023.08.10
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.10			v1.00			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int N;
	long long greedy, sum = 0;
	long long* dist, * price;
	greedy = 9223372036854775807;
	cin >> N;
	dist = (long long*)calloc(N - 1, sizeof(long long));
	price = (long long*)calloc(N, sizeof(long long));

	for (int i = 0; i < N - 1; i++)
		cin >> dist[i];

	for (int i = 0; i < N; i++)
		cin >> price[i];
	for (int i = 0; i < N - 1; i++)
	{
		if (price[i] < greedy)
			greedy = price[i];
		sum += greedy * dist[i];
	}

	cout << sum;
	free(dist);
	free(price);
	return 0;
}