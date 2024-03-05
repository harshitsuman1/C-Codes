#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int v, int w)
{
    int fw = (w-2*v)/2;
    int tw = v-fw;
    cout<<"TW = "<<tw<<" "<<"FW = "<<fw;
}
int main()
{
    int v;
    int w;
    cin>>v;
    cin>>w;
    if (w>=2 && w%2==0 && w>v)
        {
            {fun(v,w);}
        }
    else 
        cout<<"INVALID INPUT";
        
}