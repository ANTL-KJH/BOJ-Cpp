/*
* Project Name : Problem-2164
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2164
* Program First Author : JH KIM
* Date of First Write : 2023.07.24
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.24			v1.00			First Write
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp;
	queue<int> q;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	while (q.size() != 1)
	{
		q.pop();
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	cout << q.front();
	return 0;
}