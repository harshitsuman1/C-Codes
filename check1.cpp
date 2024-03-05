#include<iostream>
using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	void selection_sort(int a[],int n)
	{
	    
	    for(int i=0;i<n-1;i++)
	        for(int j=i+1;j<n;j++)
	        {
	           if(a[i] > a[j])
	             	swap(a[i],a[j]);
	        }
	}
	int print2largest(int arr[], int n) {
	    selection_sort(arr,n);
        for(int i=0; i<n;i++)
        {
            cout<<arr[i];
        }
        cout<<arr[n-2];
	}
};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int it=0;it<n;it++)
    {
        cin>>arr[it];
    }
    Solution obj;
    auto ans = print2largest(arr,n);
    ;
}