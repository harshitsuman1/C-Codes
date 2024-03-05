#include<bits/stdc++.h>
using namespace std;
int fun(int * arr, int n, int num, int diff)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i]-num)<=diff)
            count++;
    }
    if(count==0) return -1;
    else return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int num;
    cin>>num;
    int diff;
    cin>>diff;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<fun(arr,n,num,diff);

}