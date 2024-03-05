#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n,q;
     cin>>n>>q;
     int * a[n];
     for(int i=0;i<n;i++)
     {
         int k;
         cin>>k;
         int arr[k];
         for(int j=0;j<k;j++)
         {
             cin>>arr[j];
         }
         a[i]=arr;
     }
     for(int i=0;i<q;i++)
     {
         int I,J;
         cin>>I>>J;
         cout<<*(a[I]+J)<<endl;
     }
     
       
    return 0;
}