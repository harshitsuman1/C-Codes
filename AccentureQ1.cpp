#include<bits/stdc++.h>
using namespace std;
int fun(int r, int unit, int* arr,int n)
{
    int i=0;
    int food =0;
    if(n==0)
    return -1;
    for(i=0;i<n;i++)
    {
        food+=arr[i];
        if(food>=(r*unit))
        break;
    }

    if(i==n)
        return 0;
    else return i+1; 
}
int main()
{
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = fun(r,unit, arr, n);
    cout<<result;
}