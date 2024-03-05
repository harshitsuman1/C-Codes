#include <bits/stdc++.h>
using namespace std;

void helper(int arr[], int i, int j, int n)
{
    if (i == n - 1)
        return;
    if (j > 0 && arr[j] < arr[j - 1])
    {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        helper(arr, i, j - 1, n);
    }
    else
    {
        i=i+1;
        helper(arr, i, i + 1, n);
    }
}

void insertionSort(int arr[], int n)
{
    helper(arr, 0, 1, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }
}
