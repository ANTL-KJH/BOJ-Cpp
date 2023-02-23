/*
* Project Name : Problem-2444
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-2444
* Program First Author : JH KIM
* Date of First Write : 2023.02.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.02.22			v1.0			First Write
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = N - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = 2 * i - 1; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 2 * (N - i) - 1; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

    return 0;
}