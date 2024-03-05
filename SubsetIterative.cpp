#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> outer = {{}};
    for(auto it :nums)
    {
        int n = outer.size();
        for(int i=0;i<n;i++)
        {
            vector<int> v (outer[i]);
            v.push_back(it);
            outer.push_back(v);
        }
    }
    return outer;
}
int main()
{
    vector<int> v1{1, 2, 3};
    vector<vector<int>> v;
    v = subsets(v1);
    for (auto it : v)
    {
        for (auto i : it)
        {
            cout << i;
        }
        cout << endl;
    }
}