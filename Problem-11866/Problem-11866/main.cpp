/*
* Project Name : Problem-11866
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-11866
* Program First Author : JH KIM
* Date of First Write : 2023.07.24
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.24			v1.00			First Write
* JH KIM				2023.07.25			v2.00			Rewrite the program
*/
#include<iostream>
#include<queue>
using namespace std;


int main()
{
	int N, K;
	queue<int> q;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		q.push(i);

	cout << "<";

	while (q.size() != 0)
	{
		for (int i = 1; i < K; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">";
	return 0;
}