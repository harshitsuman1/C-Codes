//Pyramid Pattern using Numbers
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
                    if(i+j%2==0)
                    cout<<i;
                    else
                    cout<<"5";
            }
            else
            {
                cout<<"5";
            }
         }
         for(j=2; j<=n; j++)
        {
            if(j<=i)
            {
                    if(i+j%2==0)
                    cout<<i;
                    else
                    cout<<"5";
            }
            else
            {
                cout<<"5";
            }
         }
         cout<<endl;
    }
    return 0;
}
