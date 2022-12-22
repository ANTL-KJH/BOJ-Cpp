/*
* Project Name : Problem-25304
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-25304
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
	int total_money, n, price, count, cal_money = 0;
	cin >> total_money;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> price >> count;
		cal_money = cal_money + price * count;
	}
	if (total_money == cal_money)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}