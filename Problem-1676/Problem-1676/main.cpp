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

	// 2�� 5�� ������ 10�� �Ǹ� *****0 ������ ���ڰ� �ȴ�.
	// ���� 5�� ����� ���� ������ ������ ++������ �Ѵ�.
	// 25�� ���� 5�� n������ ���� ������ ���� n������ŭ �����־�� �Ѵ�.

	for (int i = 5; i <= n; i *= 5)
	{
		result += n / i;
	}
	cout << result;

    return 0;
}