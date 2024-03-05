#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++)
    {
        vector<int> v;
        v.push_back(intervals[i][0]);
        int mx = intervals[i][1];
        while (i + 1 < intervals.size() && mx >= intervals[i + 1][0])
        {
            mx = max(intervals[i][1], intervals[i + 1][1]);
            i++;
        }
        v.push_back(mx);
        ans.push_back(v);
    }
    return ans;
}

int main()
{
    vector<vector<int>> v{
        {1,10},
        {2,3},
        {4,5},
        {6,7},
        {8,9}
    };
    v = merge(v);
    for (auto it : v)
    {
        for (auto i : it)
        {
            cout << i;
        }
        cout << endl;
    }
}