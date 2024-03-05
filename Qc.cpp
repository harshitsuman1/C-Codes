#include <iostream>
using namespace std;

int main()
{
    int n, j, calu;
    string str;
    cin >> str;
    n = str.size();

    int b = 0, g = 0;
    for (j = 0; j < n; j++)
        if (str[j] == 'B')
            b++;
    g = n - b;
    if (n % 2)
    {
        calu = (n + 1) / 2;
        int nbe = 0, nge = 0;
        for (j = 0; j < n; j++)
        {
            if (j % 2 == 0)
                if (str[j] == 'G')
                    nge++;
                else
                    nbe++;
        }
        if (b > g)
            cout << calu - nbe;
        else
            cout << calu - nge;
    }
    else
    {
        int ngo = 0, nbo = 0;
        for (j = 0; j < n; j++)
        {
            if (str[j] == 'B')
            {
                if (j % 2)
                    nbo++;
                else
                    ngo++;
            }
        }
        int ans = min(n / 2 - nbo, n / 2 - ngo);
        cout << ans;
    }
    return 0;
}