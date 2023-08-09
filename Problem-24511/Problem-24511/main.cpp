/*
* Project Name : Problem-24511
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-24511
* Program First Author : JH KIM
* Date of First Write : 2023.08.09
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.09			v1.00			First Write
*/

#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int N, * qs, * arr, num, arrN, ssize;
	stack<int> s;
	cin >> N;
	qs = (int*)calloc(N, sizeof(int));

	for (int i = 0; i < N; i++)
	{
		cin >> qs[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		if (qs[i] == 0)
		{
			s.push(num);
		}
	}
	cin >> arrN;
	arr = (int*)calloc(arrN + s.size(), sizeof(int));
	ssize = s.size();
	for (int q = 0; q < ssize; q++)
	{
		arr[q] = s.top();
		s.pop();
	}
	for (int p = ssize; p < arrN + ssize; p++)
	{
		cin >> arr[p];
	}
	for (int o = 0; o < arrN; o++)
	{
		cout << arr[o] << " ";
	}
	free(arr);
	free(qs);
	return 0;
}