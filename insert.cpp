#include<bits/stdc++.h>
using namespace std;

int * insert(int arr[],int n,int temp)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=temp)
        {
            arr[i-1]=arr[i];
        }
        else {
            arr[i-1] = temp; break;
        }
    }
    return arr;
}

int main()
{
    int arr[5];
    int * b;
    for(int i=1;i<5;i++)
    {
        cin>>arr[i];
    }
    int a = 4;
    
    b = insert (arr,5,a);
    for(int i=0;i<5;i++)
    {
        cout<<b[i];
    }
    return 0;
}