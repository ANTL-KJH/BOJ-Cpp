/*
* Project Name : Problem-10828
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10828
* Program First Author : JH KIM
* Date of First Write : 2023.08.10
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.08.10			v1.00			First Write
*/

#include <iostream>
#include <cmath>
using namespace std;

void cantor(int n)
{
	int size = pow(3, n - 1);

	if (n == 0)
	{
		cout << "-";
		return;
	}

	cantor(n - 1);
	for (int i = 0; i < size; i++)
	{
		cout << " ";
	}
	cantor(n - 1);

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;

	while (cin >> N)
	{
		cantor(N);
		cout << "\n";
	}

	return 0;
}