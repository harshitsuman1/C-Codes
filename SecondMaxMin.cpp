#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void Second_MaxMin(vector<int> & v)
{
    sort(v.begin(),v.end());
    cout<<"Second smallest = "<<v[1];
    cout<<"Second largest = "<<v[v.size()-2];
}
int main()
{
    int n;
    cin>>n;
    vector<int> v1 (n);
    for(int it=0;it<v1.size();it++)
    {
        cin>>v1[it];
    }
    Second_MaxMin(v1);
}