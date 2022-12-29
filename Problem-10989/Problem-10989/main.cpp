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
    // �ð��� ���̱� ���� ���
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // counting sort, ��� ���� => �ԷµǴ� ���� Array index�� ī�����ϰ�
    // ī������ �ִ� index�� ���ڸ� ī���ø�ŭ ����ϸ� �ڵ� ���ĵ�.
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
