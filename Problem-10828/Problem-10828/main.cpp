/*
* Project Name : Problem-10828
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10828
* Program First Author : JH KIM
* Date of First Write : 2023.07.13
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.13			v1.00			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, top = 0, Num;
	cin >> N;
	string str;
	int* arr;
	arr = (int*)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> Num;
			arr[top] = Num;
			top++;
		}
		else if (str == "top")
		{
			if (top == 0)
				cout << -1 << "\n";
			else
				cout << arr[top-1] << "\n";
		}
		else if (str == "size")
		{
			cout << top << "\n";
		}
		else if (str == "empty")
		{
			if (top == 0)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (str == "pop")
		{
			if (top == 0)
				cout << -1 << "\n";
			else
			{
				cout << arr[top-1] << "\n";
				top--;
			}
		}
	}
	return 0;
}