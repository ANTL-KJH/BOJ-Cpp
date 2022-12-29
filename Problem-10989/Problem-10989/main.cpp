/*
* Project Name : Problem-10989
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-10989
* Program First Author : JH KIM
* Date of First Write : 2022.12.28
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.28			v1.0			First Write
*/
#include <iostream>
using namespace std;


int main(void)
{
    // 시간을 줄이기 위해 사용
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // counting sort, 계수 정렬 => 입력되는 수의 Array index를 카운팅하고
    // 카운팅이 있는 index의 숫자를 카운팅만큼 출력하면 자동 정렬됨.
    int numOfnum, n_array[10001] = { 0, }, input_num;
    cin >> numOfnum;
    for (int i = 0; i < numOfnum; i++)
    {
        cin >> input_num;
        n_array[input_num]++;
    }
    for (int i = 0; i < 10001; i++)
    {
        if (n_array[i] != 0)
        {
            for (int p = 0; p < n_array[i]; p++)
                cout << i << '\n';
        }
    }

    return 0;
}
