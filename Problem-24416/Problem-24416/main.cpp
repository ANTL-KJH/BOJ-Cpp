/*
* Project Name : Problem-24416
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-24416
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

int count_recursive = 0, count_dynamic = 0;
int fibo_dict[41];

int recursive_fibo(int n)
{
    if (n == 1 or n == 2)
    {
        count_recursive++;
        return 1;
    }        
    else
    {
        return (recursive_fibo(n - 1) + recursive_fibo(n - 2));
    }

}

int dynamic_fibo(int n)
{
    for (int i = 3; i <= n; i++)
    {
        count_dynamic++;
        fibo_dict[i] = fibo_dict[i - 1] + fibo_dict[i - 2];
    }
    return fibo_dict[n];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    fibo_dict[1]=1, fibo_dict[2] = 1;
    cin >> n;
    recursive_fibo(n);
    dynamic_fibo(n);
    cout << count_recursive << " " << count_dynamic;
    return 0;
}