/*
* Project Name : Problem-15596
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-15596
* Program First Author : JH KIM
* Date of First Write : 2022.12.23
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.23			v1.0			First Write
*/
#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int>& a)
{
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a.at(i);
	}
	return ans;
}


/*int main(void)
{
	vector<int> intVector;

	for(int i=0; i<10; i++)
	{
		intVector.push_back(i);
	}
	cout << sum(intVector);
	
	return 0;
}*/