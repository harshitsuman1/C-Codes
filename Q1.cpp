#include <bits/stdc++.h>
using namespace std;

void Max_Min (int arr[],int n)
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    cout<<"Largest: "<<mx<<endl;
    cout<<"Smallest: "<<mn<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Max_Min(arr,n);
}