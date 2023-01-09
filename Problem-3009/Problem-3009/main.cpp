/*
* Project Name : Problem-3009
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-3009
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
    int x[3];
    int y[3];
    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];
    if (x[0] == x[1])
        cout << x[2] << " ";
    else if (x[0] == x[2])
        cout << x[1] << " ";
    else
        cout << x[0] << " ";

    if (y[0] == y[1])
        cout << y[2];
    else if (y[0] == y[2])
        cout << y[1];
    else
        cout << y[0];
    return 0;
}