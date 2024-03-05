#include <bits/stdc++.h>
using namespace std;

int SumN(int arr[], int n)
{
    if(n==1) return arr[0];
    return arr[n-1] + SumN(arr,n-1);
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
    cout<<SumN(arr,n);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << "\t";
    // }
}
