#include<iostream>
using namespace std;
void decimalToBinary(int n)
{
    int j, i, s[20];
    for(i=0;n!=0;i++)
    {
        s[i]=n%2;
        n=n/2;
    }
    for(j=i-1;j<=i-1;j--)
    {
        cout<<s[i];
    }
}
int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    decimalToBinary(n);

}