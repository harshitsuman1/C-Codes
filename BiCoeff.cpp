#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n, int r)
{
    int x=factorial(n)/factorial(n-r)/factorial(r);
    return x;
}
int main()
{
    int n;
    cout<<"Enter Binary Coefficient Value";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=n-i;space++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
              cout<<combination(i-1,j-1)<<" ";
        }
        /*for(int j=1;j<=n;j++)
        {
            if(j>=n+1-i)
              cout<<combination(i-1,i+j-n-1)<<" ";
            else
              cout<<" ";
        }*/
        cout<<endl;
    }
    return 0;
}