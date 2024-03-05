#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int oddeven(long long int n)
{
    int first=0;
    int second=0;
    int result=0;
    while(n>0)
    {
       first=n%10;
       n/=10;
       second=n%10;
       n/=10;
       result+=first-second;
    }
    return result;
}
int main()
{
    long long int n;
    cin>>n;
    int ans=abs(oddeven(n));
    cout<<ans;
}