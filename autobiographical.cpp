#include<iostream>
using namespace std;
int funcount(char * n)
{
    int i,k=0;
    for(i=0;n[i]!='\0';i++)
    {
        int c =0;
        for(int j=0;n[j]!='\0';j++)
        {
            if(char(48+i)==n[j])
            c++;
        }
        if(n[i]==char(48+c)){
             k++;
             continue;
        }
        else return 0;          
    } 
    return k-1;
}
int main()
{
    char c[10];
    cin>>c;
    char * n=c;
    int result = funcount(n);
    cout<<result;
}
