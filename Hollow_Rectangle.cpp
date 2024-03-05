#include <iostream>
using namespace std;

int main()
{
    int rows, col, i, j;
    cin >> rows >> col;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i >= 2 && i < rows)
            {
                if (j == 1 || j == col)
                    cout << "* ";
                else
                    cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}