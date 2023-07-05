/*
* Project Name : Problem-25192
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-25192
* Program First Author : JH KIM
* Date of First Write : 2023.07.05
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.05			v1.00			First Write
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, cnt = 0;
	string inputStr;
	cin >> N;
	vector<string> v_str;
	for (int i = 0; i < N; i++)
	{
		cin >> inputStr;
		if (inputStr == "ENTER")	// Enter�� �ԷµǸ� vector �ʱ�ȭ
		{
			sort(v_str.begin(), v_str.end());
			v_str.erase(unique(v_str.begin(), v_str.end()), v_str.end());
			cnt += v_str.size();
			v_str.clear();
		}
		else
		{
			v_str.push_back(inputStr);
		}
	}
	// ��� �Է� ������ �ߺ����� ���� �Է¸�ŭ ����
	sort(v_str.begin(), v_str.end());
	v_str.erase(unique(v_str.begin(), v_str.end()), v_str.end());
	cnt += v_str.size();
	cout << cnt;
	return 0;
}