#include <iostream>
using namespace std;
int LinearSearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]==key)
       return i;
    }
    return -1;
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
    int key;
    cout<<"Enter the key element";
    cin>>key;
    cout<<LinearSearch(arr,n,key);
}