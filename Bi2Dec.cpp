#include<iostream>
#include<math.h>
using namespace std;
int check(int n)
{
    int i=0;
    int Dec=0;
    while(n)
    {
        int last_digit=n%10;
        Dec=Dec+pow(8,i)*last_digit;
        n=n/10;
        i++;
    }
    return Dec;
}
int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    cout<<check(n);

}