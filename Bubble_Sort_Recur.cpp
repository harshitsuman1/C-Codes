#include<bits/stdc++.h>
using namespace std;

int * BubbleSort(int arr[],int n, int Arr[],int N)
{
    int * a;
    if(n==1){
        Arr[N-n] = arr[N-n];
        return Arr; 
    }
    int temp = arr[N-n];
    a = BubbleSort(arr,n-1,Arr,N);
    int i = N-n+1;
    for(;i<N;i++)
    {
        if(a[i]<=temp) a[i-1]=a[i];
        else break;
    }
    a[i-1] = temp;
    return a;
}

int main()
{
    int n;
    cin>>n;
    int arr[n],b[n];
    int * c;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    c = BubbleSort(arr,n,b,n);
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}