#include <iostream>
using namespace std;
class MxMn
{
    public:
    int Max;
    int Min;
}p;
MxMn MaxMin(int *arr, MxMn MN, int n)
{
    MN.Max=INT_MIN;
    for(int i=0;i<n;i++){
        MN.Max= max(MN.Max,arr[i]);
    }
    MN.Min=INT_MAX;
    for(int i=0;i<n;i++){
        MN.Min= min(MN.Min,arr[i]);
    }
    return MN;
}
int BinarySearch(int arr[],int n,int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key)
             return mid; 
        else if (arr[mid]>key)
             e =mid-1;
        else 
             s=mid+1;
    }
    return -1;
}
void Showdata(int arr[],int n)
{
   int i=0;
   while(i<n)
   {
    cout<<arr[i];
    i++;
   }
}
int main()
{
   int n;
   cout<<"Enter no. of elements";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   MxMn SecMxMin=MaxMin(arr,p,n);
   cout<<"max= "<<SecMxMin.Max<<"Min= "<<SecMxMin.Min;
}