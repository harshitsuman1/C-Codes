#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<string,int,int> t;
    tuple<string,int,int> u;
    t = make_tuple("India", 1,2);
    /*cout<<get<0>(t);
    cout<<get<1>(t);
    cout<<get<2>(t);
    int a, b;
    string s;
    tie(s, a, b)=t;
    cout<<s<<" "<<a<<" "<<b;*/
    swap(t,u);
    cout<<get<0>(u)<<" ";
    cout<<get<1>(u)<<" ";
    cout<<get<2>(u)<<" ";
}