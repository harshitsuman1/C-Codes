#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> first, vector<int> second)
{
    vector<int> ans;
    int i=0,j=0,k=0;
    while(i<first.size() && j< second.size())
    {
        if(first[i]<second[j])
        {
            ans.push_back(first[i]);
            i++;
        }
        else
        {
            ans.push_back(second[j]);
            j++;
        }
    }
    while (i < first.size())
    {
        ans.push_back(first[i]);
        i++;
    }
    while (j < second.size())
    {
        ans.push_back(second[j]);
        j++;
    }
    return ans;
}

vector<int> MergeSort(vector<int> arr)
{
    if(arr.size()==1) return arr;
    int mid = arr.size()/2;
    vector <int> left,right;
    left.assign(arr.begin(),arr.begin()+mid);
    right.assign(arr.begin() + mid,arr.end());
    left = MergeSort(left);
    right = MergeSort(right);
    return merge (left,right);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v = MergeSort(v);
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << "\t";
    }
}
