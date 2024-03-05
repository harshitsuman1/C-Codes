#include <bits/stdc++.h>
using namespace std;

vector<string> stringSubset(string res, string str)
{
    if (str.size() == 0)
    {
        vector<string> v;
        v.push_back(res);
        return v;
    }
    vector<string> v = stringSubset(res + str[0], str.substr(1));
    vector<string> ans = stringSubset(res, str.substr(1));
    ans.insert(ans.begin(),v.begin(),v.end());
    return ans;
}

int main()
{
    vector<string> v = stringSubset("", "abc");
    for(auto it:v) cout<<it<<"\t";
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << "\t";
    // }
}
