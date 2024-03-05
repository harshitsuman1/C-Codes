#include<iostream>
using namespace std;
void swap(int *pa,int *pb)
{
    int temp=*pa;
    *pa=*pb;
    *pb=temp;
}
int main()
{
    int a=5, b=6;
    swap(&a,&b);
    cout<<a<<endl<<b;
}