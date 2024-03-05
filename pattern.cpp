#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void pattern1 (int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<"*";
        cout<<endl;
    }
        
}
void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<i+1 << " ";
        cout<<endl;
    }
}
void pattern3(int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==m-1||j==0||j==n-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void floyds_triangle(int n)
{
    int c=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++){
            cout<<c<< " ";
            c++;
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout<<j;
            if(j>=n-i-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
void pallindromic_pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=n-i-1)
                cout<<n-j;
            else cout<<" ";
        }
        for(int j=1;j<=i;j++)
            cout<<j+1;
        cout<<endl;
    }
}
void adv_pallindromic_pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=n-i-1)
                cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(j>=n-i-1)
                    cout<<"* ";
                else cout<<"  ";
            }
            for(int j=1;j<=i;j++)
                cout<<"* ";
            cout<<endl;
        }
}   
void adv_pallindromic_pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-i-1)
                cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1;j<n;j++)
        {
            if(j==i)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(j==n-i-1)
                    cout<<"* ";
                else cout<<"  ";
            }
            for(int j=1;j<n;j++)
            {
                if(j==i)
                    cout<<"* ";
                else cout<<"  ";
            }
            cout<<endl;
        }
}
void adv_pallindromic_pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=n-i)
                cout<<"  ";
            else cout<<"* ";
        }
        for(int j=1;j<n;j++)
        {
            if(j<=i-1)
                cout<<"  ";
            else cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(j>=n-i)
                    cout<<"  ";
                else cout<<"* ";
            }
            for(int j=1;j<n;j++)
            {
                if(j<=i-1)
                    cout<<"  ";
                else cout<<"* ";
            }
            cout<<endl;
        }
}   
void adv_pallindromic_pattern3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(j<=i)
                cout<<"* ";
            else cout<<"  ";
        }
            
        for(int j=0;j<n;j++)
        {
            if(j>=n-i-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=n;j++)
        {
            if(j<=i)
                cout<<"* ";
            else cout<<"  ";
        }
        for(int j=0;j<n;j++)
        {
            if(j>=n-i-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
void adv_pallindromic_pattern4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(j==0 || j==i)
                cout<<"* ";
            else cout<<"  ";
        }
            
        for(int j=0;j<n;j++)
        {
            if(j==n-i-1 || j==n-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=n;j++)
        {
            if(j==0 || j==i)
                cout<<"* ";
            else cout<<"  ";
        }
            
        for(int j=0;j<n;j++)
        {
            if(j==n-i-1 || j==n-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
void adv_pallindromic_pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=n-i-1)
                cout<<"*";
            else cout<<" ";
        }
        for(int j=1;j<n;j++)
        {
            if(j<=n-i-1)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
void adv_pallindromic_pattern6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n-1 || j==n-i-1)
                cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1;j<n;j++)
        {
            if(i==0 || j==n-i-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
void adv_pallindromic_pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=n-i-1)
                cout<<i+j-n+2<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
}
void zig_zag (int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<9;j++)
        {
            if((i==0 && j%4==2) || (i==1 && ((i+j)%4==0 || (i+j)%4==2) ) || (i==2 && j%4==0))
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int m,n;
    cin>>n;
    zig_zag(n);
}
