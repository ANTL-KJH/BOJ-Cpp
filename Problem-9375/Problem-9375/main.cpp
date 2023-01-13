/*
* Project Name : Problem-9375
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9375
* Program First Author : JH KIM
* Date of First Write : 2023.01.12
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.12			v1.0			First Write
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int loop, n, result = 1;
    cin >> loop;

    string category, name;
    
    while (loop--)
    {
        result =1;
        map<string, int> m;
        map<string, int>::iterator iter;
        cin >> n;

        while (n--)
        {
            cin >> name >> category;            // name 사용 x
            m[category]++;                      // stl map int는 0으로 초기화 되어있음
        }
        iter = m.begin();
        for (iter = m.begin(); iter != m.end(); iter++)
            result *= (iter->second + 1);

        result -= 1;
        cout << result << '\n';
    }
	return 0;
}