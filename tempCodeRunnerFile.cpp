#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;

    bool p[n + 5];
    memset(p, true, sizeof(p));

    for (int i = 2; i * i <= n; i++)
    {
        if (p[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                p[j] = false;
        }
    }

    // for (int i = 0; i <= n; i++)
    //     if (p[i] == true)
    //         cout << i << " ";
    // cout << "\n";

    int arr[n + 5];
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i <= n; i++)
        if (p[i] == true)
            arr[i] = dp[i - 1] + 1;
        else
            arr[i] = dp[i - 1];

    // for (int i = 0; i <= n; i++)
    //     cout << arr[i] << " ";

    while (n != 1)
    {
        n -= arr[n];
        count++;
    }

    // cout << "\n";
    cout << count;
    return 0;
}