#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[i])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
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
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
    cout<<"\t"<<arr[i];
    }
    return 0;
}  