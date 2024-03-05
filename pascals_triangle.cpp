#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++)
    {
        v[i].resize(i+1);
        v[i][0]=v[i][i]=1;
        for(int j=1;j<i;j++)
            v[i][j]=v[i-1][j-1]+v[i-1][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
            cout<<" ";
        for(int j=0;j<=i;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
//Another logic 
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n-i;j++)   (declare int coeff = 1)
//         cout<<" ";
//     for(int j=0;j<=i;j++)
//     {
//         if(i==0 || j==0)
//             coeff=1;
//         else coeff=coeff*(i-j+1)/j;
//             cout<<coeff<<" ";
//     }
//     cout<<endl;
// }