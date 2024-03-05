#include <bits/stdc++.h>
using namespace std;

void helper(vector<char> &str, int s, int e)
{
    if (s < e)
    {
        swap(str[s], str[e]);
        helper(str, s + 1, e - 1);
    }
    else
        return;
}

void reverseString(vector<char> &s)
{
    helper(s, 0, s.size() - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SelectionSort(arr, 4, 1, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
}
