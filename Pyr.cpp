#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=n+1-i)
                cout<<"*";
            else cout<<" ";
        }
        for(int j=2;j<=n;j++)
        {
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";

        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n+1-i)
                cout<<"*";
            else cout<<" ";
        }
        for(int j=2;j<=n;j++)
        {
            if(j>=i)
                cout<<"*";
            else
                cout<<" ";

        }
        cout<<endl;
    }
    
}