#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        sum+=last_digit;
        n/=10;
        if(n==0 && sum>9){
            n=sum;
            sum=0;
        }
    }
    if (sum==1) cout<<"Uno";
    else cout<<"NOT Uno";
}