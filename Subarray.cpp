#include <iostream>
using namespace std;
void SumOfSubarray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        int sum=0;
        for (int j=i;j<n;j++)
        {
           sum+=arr[j];
           cout<<"\t"<<sum;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     SumOfSubarray(arr,n);
     return 0;
}