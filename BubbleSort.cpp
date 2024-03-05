#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
   for(int i=1;i<n;i++)
   {
     for(int j=0;j<n-i;j++)
     {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
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
    cout<<"Our Sorted array is :";
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
    cout<<"\t"<<arr[i];
    }
    return 0;
}  