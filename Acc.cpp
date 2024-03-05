#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Garage
{
    int bike;
    int car;
    int truck;
};

int maxRevenue (struct Garage g[],int m)
{
    int mx = INT_MIN;
    for(int i=0;i<m;i++)
    {
        int revenue = g[i].bike*100 + g[i].car*250 +g[i].truck*500;
        mx = max(revenue,mx);
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;
    struct Garage g[n];
    for(int i=0;i<n;i++)
    {
        cin>>g[i].bike;
        cin>>g[i].car;
        cin>>g[i].truck;
    }
    cout<<maxRevenue(g,n);
}

