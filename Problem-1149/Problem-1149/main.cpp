/*
* Project Name : Problem-1149
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-1149
* Program First Author : JH KIM
* Date of First Write : 2023.01.20
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2023.01.20			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, R, G, B;
    int house[1001][3] = { 0, };
    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> R >> G >> B;
        house[i][0] = min(house[i - 1][1], house[i - 1][2]) + R;        // i번째 Red인 경우
        house[i][1] = min(house[i - 1][0], house[i - 1][2]) + G;        // i번째 Blue인 경우
        house[i][2] = min(house[i - 1][1], house[i - 1][0]) + B;        // i번째 Green인 경우
    }
    cout << min(house[N][2], min(house[N][0], house[N][1]));

    return 0;
}