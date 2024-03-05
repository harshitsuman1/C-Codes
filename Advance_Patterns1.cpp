//Palindromic Pattern
#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the max number of stars:\n";                        
    cin>>n;  
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=n+1-i)
            {
                    cout<<n+1-j<<" ";
            }
            else
            {
                cout<<"  ";
            }
         }
         for(j=2; j<=n; j++)
        {
            if(j<=i)
            {
                    cout<<j<<" ";
            }
            else
            {
                cout<<"  ";
            }
         }
         cout<<endl;
    }
    return 0;
}
