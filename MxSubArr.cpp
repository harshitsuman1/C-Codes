#include<iostream>
using namespace std;
int MaxSubArray(int arr[], int n)
{
    int counter=1;
    int sum=0;
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if (sum>max){max=sum;counter++;} 
        if(sum<0) {sum=0;counter=1;}
    }
    return counter;                             
}
int main()
{
    int n,i=0;
    
    cin>>n;

    int arr[n];
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    int max=MaxSubArray(arr,n);
    cout<<max;

}