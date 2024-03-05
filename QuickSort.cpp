#include <bits/stdc++.h>
using namespace std;

int partition (int arr[], int low, int high)
{
    int i = low,j=high;
    int pivot = arr[low];
    while(i<j)
    {
        while (arr[i] <= pivot && i < high)
            i++;
        while (arr[j] > pivot && j > low) 
            j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}

void sort(int * nums, int low, int high)
{
    if(low<high)
    {
        int pIndex = partition(nums,low,high);
        sort(nums,low,pIndex-1);
        sort(nums, pIndex+1,high);
    }
}

int main()
{
    int n;;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, 0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }
}
