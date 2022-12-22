/*
* Project Name : Problem-15552
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-15552
* Program First Author : JH KIM
* Date of First Write : 2022.12.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.22			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int loop, a, b;
	cin >> loop;

	for (int i = 0; i < loop; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}