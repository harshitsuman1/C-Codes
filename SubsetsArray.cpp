#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> helper(vector<int>& res, vector<int> &nums, int i)
{
    if (i == nums.size())
    {
        vector<vector<int>> v;
        v.push_back(res);
        return v;
    }
    vector<vector<int>> v1 = helper(res, nums, i + 1);
    res.push_back(nums[i]);
    vector<vector<int>> v2 = helper(res, nums, i + 1);
    res.pop_back();
    v1.insert(v1.begin(), v2.begin(), v2.end());
    return v1;
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> v;
    return helper(v, nums, 0);
}
int main()
{
    vector <int> v1 {1,2,3};
    vector<vector<int>> v;
    v = subsets(v1);
    for(auto it:v)
    {
        for(auto i:it)
        {
            cout<<i;
        }
        cout<<endl;
    }
}