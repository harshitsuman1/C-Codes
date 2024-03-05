#include <bits/stdc++.h>
using namespace std;

void stringSubset(string res, string str)
{
    if (str.size() == 0)
        cout << res <<"\t";
    else
    {
        stringSubset(res + str[0], str.substr(1));
        stringSubset(res, str.substr(1));
    }
}

int main()
{
    stringSubset("", "abc");

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
