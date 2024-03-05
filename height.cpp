#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i : arr){
        cin>>i;
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1] || arr[i]>arr[i-1]) count++;
    }
    if(arr[0]>arr[1]) count++;
    if(arr[n-1]>arr[n-2]) count++;
    cout<<count;
    return 0;
}