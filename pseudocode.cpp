#include<iostream>
using namespace std;
void funn(int a, int b,int c)
{
    if((b+8)<c)
    {
       c=c+b+b;;
    }
    else
    {
        c=c+b+a;
    }
    c=6+7+b;
    if((b+c)<(a-b))
        b=a+c+a;
    cout<<a+b+c;
}
int main()
{
   funn(1,5,8);
}
