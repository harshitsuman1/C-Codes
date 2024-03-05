// Series: 6 28 66 120 190 276 ......
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num =1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<setw(5)<<setfill('0')<<setiosflags(ios_base::right)<< 8*(num)*(num)-2*(num)<<" ";
            num++;
        }
        cout<<endl;
    }


}