#include <bits/stdc++.h>
using namespace std;
bool palindrome (string v){
    int s=0,e=v.size()-1;
    while(s<e){
        if(v[s]!=v[e]) return false;
        else{
            s++; e--;
        }
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    string s1,s2,s3;
    // cout<<palindrome("abbcb");
    for(int i=1;i<n-1;i++){
        s1=s.substr(0,i);
        if(palindrome(s1)){
            for(int j=1;j<n-i;j++){
                s2=s.substr(i,j);
                // cout<<s2<<endl;
                s3=s.substr(i+j,n-i-j);
                // cout<<s3;
                if(palindrome(s2) && palindrome(s3)){
                    cout<<s1<<"\n"<<s2<<"\n"<<s3;
                    return 0;
                }
            }
        }

    }
    cout<<"Not Possible";
}