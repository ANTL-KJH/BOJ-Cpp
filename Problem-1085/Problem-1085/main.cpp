/*
* Project Name : Problem-1085
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1085
* Program First Author : JH KIM
* Date of First Write : 2023.01.09
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.09			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, w, h, min_x, min_y, min;
    cin >> x >> y >> w >> h;
    min_x = (w - x) < x ? (w - x) : x;
    min_y = (h - y) < y ? (h - y) : y;
    min = min_x < min_y ? min_x : min_y;
    cout << min;
    return 0;
}