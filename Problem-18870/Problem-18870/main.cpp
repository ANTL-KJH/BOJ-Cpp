/*
* Project Name : Problem-18870
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-18870
* Program First Author : JH KIM
* Date of First Write : 2022.12.29
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.29			v1.0			First Write
*/
#include <iostream>
#include <algorithm>        // for unique
#include <vector>
using namespace std;

int main()
{
    int n;
    int temp;
    vector<int> sorting_vector;
    vector<int> original_vector;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sorting_vector.push_back(temp);
        original_vector.push_back(temp);
    }
    sort(sorting_vector.begin(), sorting_vector.end()); // sorting
    // unique �Լ��� �ߺ��Ǵ� ������ �ڷ� ������ �ߺ������� ù��° ��ġ�� ��ȯ, 1, 1, 2, 2, 3 => 1, 2, 3, 1, 2 => 3, 1, 2�� 1��ȯ
    sorting_vector.erase(unique(sorting_vector.begin(), sorting_vector.end()), sorting_vector.end()); // erase repetition value

    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(sorting_vector.begin(), sorting_vector.end(), original_vector[i]) - sorting_vector.begin() << " ";
    }
}