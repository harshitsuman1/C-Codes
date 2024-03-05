#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int mid, int e)
{
    vector<int> ans;
    int i = s;
    int j = mid+1;
    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j <= e)
    {
        ans.push_back(arr[j]);
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        arr[s + i] = ans[i];
    }
}

void MergeSort(vector<int> &arr , int s, int e)
{
    if(s==e) return;
    int mid = s + (e-s)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    MergeSort(v,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
}
