/*
* Project Name : Problem-9184
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9184
* Program First Author : JH KIM
* Date of First Write : 2023.01.18
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.18			v1.0			First Write
*/
#include <iostream>
using namespace std;

int ga, gb, gc;
int w_data[21][21][21] = { 0, };

int w(int a, int b, int c)
{ 
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);

    if (w_data[a][b][c])
        return w_data[a][b][c];
    if (a < b && b < c)
    {
        w_data[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return w_data[a][b][c];
    }
    w_data[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return w_data[a][b][c];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1)
    {
        cin >> ga >> gb >> gc;
        if (ga == -1 && gb == -1 && gc == -1)
            break;
        cout << "w(" << ga << ", " << gb << ", " << gc << ") = " << w(ga, gb, gc) << '\n';
    }

    return 0;
}