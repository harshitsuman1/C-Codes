#include <bits/stdc++.h>
using namespace std;

    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int> m, ans;
        vector<int> v;
        for(auto it:nums)
        {
            m[it]++;
        }
        auto i = m.begin();
        while(i!=m.end())
        {
            ans[i->second]=i->first;
            i++;
        }
        auto it = ans.rbegin();
        int cnt=0;
        while(cnt<k && it!=ans.rend())
        {
            v.push_back(it->second);
            cnt++;it--;
        }
        return v;
    }

int main()
{
    vector<int> v {1,2};
    vector<int> ans = topKFrequent(v,2);
    for(auto it:ans)
    {
        cout<<it;
    }
}