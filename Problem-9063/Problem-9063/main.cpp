/*
* Project Name : Problem-9063
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9063
* Program First Author : JH KIM
* Date of First Write : 2023.06.27
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.06.27			v1.0			First Write
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const pair<int, int>& a, const pair<int, int>& b);
int main(void)
{
	vector<pair<int, int>> pos;
	int N, x, y;
	int x_min, x_max, y_min, y_max;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;	// �Է�
		pos.push_back(make_pair(x, y));	// vector�� pair ���·� �Է�
	}
	vector<pair<int, int>>::iterator pos_iter;
	pos_iter = pos.begin();

	sort(pos.begin(), pos.end());	// x ���� ����
	x_min = pos[0].first;
	x_max = pos[N - 1].first;
	sort(pos.begin(), pos.end(), compare);	// y ���� ����
	y_min = pos[0].second;
	y_max = pos[N - 1].second;
	if (x_min == x_max || y_min == y_max)	// ���簢���� ��������� �ʴ� ���
	{
		cout << 0;
		return 0;
	}
	cout << (x_max - x_min) * (y_max - y_min);
	return 0;
}

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
	{
		return a.first > b.first;	// second�� ������ first�� ū ���� ������
	}
	return a.second < b.second;
}