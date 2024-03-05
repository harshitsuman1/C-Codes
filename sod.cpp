#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        n = n * (n - i);
    }
    cout << n;
    return 0;
}
