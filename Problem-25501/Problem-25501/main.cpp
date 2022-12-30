/*
* Project Name : Problem-25501
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-25501
* Program First Author : JH KIM
* Date of First Write : 2022.12.30
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.30			v1.0			First Write
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void _mergeSort(int* array, int* tmp_array, int left, int right);
void mergeSort(int* array, int size);

int count = 0;
int save_count = 0;
int main(void)
{
	int n, * i_array;
	cin >> n >> ::save_count;
	i_array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> i_array[i];
	}
    mergeSort(i_array, n);
    if (::count < ::save_count)
        cout << -1;
	return 0;
}

void _mergeSort(int* array, int* tmp_array, int left, int right)
{
    if (left >= right)                          // array size => 1
        return;
    int i, j, k, mid;
    mid = (left + right) / 2;
    _mergeSort(array, tmp_array, left, mid);
    _mergeSort(array, tmp_array, mid + 1, right);

    //for (i = mid; i >= left; i--)               // left ~ mid copy
    //    tmp_array[i] = array[i];

    for (i = left; i <= mid; i++)               // left ~ mid copy
        tmp_array[i] = array[i];

    for (j = 1; j <= right - mid; j++)
        tmp_array[right - j + 1] = array[j + mid];

    for (i = left, j = right, k = left; k <= right; k++)
    {
        if (tmp_array[i] < tmp_array[j])        // compare and save
            array[k] = tmp_array[i++];
        else
            array[k] = tmp_array[j--];
        ::count++;
        if (::count == ::save_count)
            cout << array[k];
    }
}

void mergeSort(int* array, int size)
{
    int* tmp_array = (int*)calloc(size, sizeof(int));
    if (tmp_array == NULL)
    {
        printf("Error in creation of tmp_array (size = %d) in mergeSort() !!!\n");
        exit;
    }
    _mergeSort(array, tmp_array, 0, size - 1);
    delete[] tmp_array;
}