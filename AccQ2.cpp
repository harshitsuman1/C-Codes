#include<bits/stdc++.h>
using namespace std;
int Operation(string str)
{
   int ans=0;
   for(int i=0;i<str.size();i++)
   {
    if(ans==0)
    {
        if(str[i]=='A')
            ans =str[i-1]-48 & str[i+1]-48;
        else if(str[i]=='B')
            ans =str[i-1]-48 | str[i+1]-48;
        else if (str[i]=='C')
            ans =str[i-1]-48 ^ str[i+1]-48;
    }
    else 
        {
            if(str[i]=='A')
                ans =ans & str[i+1]-48;
            else if(str[i]=='B')
                ans =ans | str[i+1]-48;
            else if(str[i]=='C')
                ans =ans ^ str[i+1]-48;
        }
   }
   return ans; 
}
int main()
{
    string str;
    cin>>str;
    int result = Operation(str);
    cout<<result;

}