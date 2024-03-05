#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"\nEnter the number:";
    cin>>n;
    while (n!=0)
      {
        int last_digit=n%10;
        sum += last_digit;
        n=n/10;
      }
    cout<<"Sum of all digits="<<sum;
    
  return 0;
}