#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<multiset<int>> s;
    s.insert({1,2,3,4});
    s.insert({1,2,3,0});
    s.insert({1,2,3,4});
    s.insert({4,2,3,1});
    for(auto a:s)
    {
        for(auto b:a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }

}