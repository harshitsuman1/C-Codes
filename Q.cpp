#include<iostream>
using namespace std;
int main()
{
    int a[3][4]={1,2,3,4,4,3,2,1,7,8,9,0};
    printf("%u, %u ",a,&a+1);
    cout<<endl;
}