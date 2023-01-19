/*
* Project Name : Problem-9461
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-9461
* Program First Author : JH KIM
* Date of First Write : 2023.01.19
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.19			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 0, N, result;
    long long len_data[101] = { 0, };
    len_data[1] = 1, len_data[2] = 1, len_data[3] = 1;
    for (int i = 4; i < 101; i++)
    {
        len_data[i] = len_data[i - 2] + len_data[i - 3];
    }

    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> N;
        cout << len_data[N] << "\n";
    }

    return 0;
}