#include <bits/stdc++.h>
using namespace std;
void replace_occurences(string s)
{
    int count=1;
    string str = "";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            str+=s[i]+ to_string(count);
            count=1;
        }
        else count++;   
    }
    cout<<str;
}
int main()
{
    string s;
    cin>>s;
    replace_occurences(s);
}