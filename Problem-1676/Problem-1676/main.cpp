/*
* Project Name : Problem-1676
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1676
* Program First Author : JH KIM
* Date of First Write : 2023.01.12
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.12			v1.0			First Write
*/
#include <iostream>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n, result = 0;
	cin >> n;

	// 2와 5가 곱해져 10이 되면 *****0 형태의 숫자가 된다.
	// 따라서 5가 약수인 수가 곱해질 때마다 ++연산을 한다.
	// 25와 같은 5가 n제곱된 수가 곱해질 때는 n제곱만큼 더해주어야 한다.

	for (int i = 5; i <= n; i *= 5)
	{
		result += n / i;
	}
	cout << result;

    return 0;
}