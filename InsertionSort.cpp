#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    int i,j;
    
    for(int i=1;i<n;i++)
    {
        int c=0;
        int temp=arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
            {
                
                arr[j+1]=arr[j];
                c++;
            }
        }
        arr[i-c]=temp;
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
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
    cout<<"\t"<<arr[i];
    }
    return 0;
}  