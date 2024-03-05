#include<bits/stdc++.h>
using namespace std;
int cse(string &s) {
    unordered_set <string> u;
    
    return u.size();
}
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size()-1;i++)
    {
        string s=str.substr(i,2);
        cout<<s;
    }
    cout<<cse(str);
}