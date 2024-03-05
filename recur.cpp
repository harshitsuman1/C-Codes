#include <bits/stdc++.h>
using namespace std;

vector<int> findIndex(vector<int>& v,int target, int index)
{
    vector<int> list;
    if(index == v.size()) return list;
    if(v[index]==target) list.push_back(index);
    vector <int> ans = findIndex(v,target,index+1);
    list.insert(list.end(),ans.begin(),ans.end());
    return list;
}

int main()
{
    vector<int> v {4,4,4,4,4,4,4};
    vector<int> list;
    list = findIndex(v,4,0);
    for (auto it:list) cout<<it;
}

