#include<iostream>
using namespace std;
char * reverse(char * p)
{
    int l,i;
    char t;
    for(l=0;*(p+l)!=' ';l++);
    for(i=0;i<l/2;i++)
    {
        t = *(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    for(;*(p+l)!=' ';l++);
    for(;i<l/2;i++)
    {
        t = *(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    for(;*(p+l)!=' ';l++);
    for(;i<l/2;i++)
    {
        t = *(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return p;
}
int main()
{
    char name[20]="the boy ran";
    char * p = reverse(name);
    for(int i=0;p[i]!=0;i++)
    {
        cout<<p[i];
    }
}