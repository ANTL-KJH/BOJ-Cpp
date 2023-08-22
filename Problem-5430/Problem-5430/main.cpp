/*
* Project Name : Problem-5430
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-5430
* Program First Author : JH KIM
* Date of First Write : 2023.07.28
* =======================================================================================================
* Source Code Modification History
* =======================================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.07.28			v1.00			First Write
*/

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void)
{
	int T,num, *arr;
	string funcStr, arrStr, s= "";
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		bool seq = false;
		deque<int>dq;
		cin >> funcStr;
		cin >> num;
		cin >> arrStr;

		for (int i = 0; i < arrStr.size(); i++)
		{

			if (isdigit(arrStr[i]))
			{
				s += arrStr[i];

			}
			else {
				if (!s.empty()) {
					dq.push_back(stoi(s));
					s = "";
				}
			}
		}
		for (int p = 0; p < funcStr.size(); p++)
		{
			if (funcStr[p] == 'R')
			{
				if (seq == false)
					seq = true;
				else
					seq = false;
			}
			else if (funcStr[p] == 'D')
			{
				if (dq.size() == 0)
				{
					cout << "error\n";
					break;
				}
				if (seq == 0)
					dq.pop_front();
				else
					dq.pop_back();
			}
			if (p == funcStr.size() - 1)
			{
				cout << "[";
				while (dq.size() != 0)
				{
					if (seq == false)
					{
						if (dq.size() == 1)
							cout << dq.front();
						else
							cout << dq.front() << ",";
						dq.pop_front();
					}
					else
					{
						if (dq.size() == 1)
							cout << dq.back();
						else
							cout << dq.back() << ",";
						dq.pop_back();
					}
				}
				cout << "]\n";
			}
		}
	}
	return 0;
}