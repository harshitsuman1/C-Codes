#include<bits/stdc++.h>
using namespace std;

void SelectionSort (int arr[],int r, int c, int i, int n)
{
    if(r==0) return;
    if(c<n)
    {
        if(arr[i]>arr[c]) swap (arr[i],arr[c]);
        SelectionSort(arr,r,c+1,i,n);
    }
    else{
        SelectionSort(arr,r-1,i+2,i+1,n);
    }
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
    SelectionSort(arr,4,1,0,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }

}
