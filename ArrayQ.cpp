#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<reverseWord(s)<<endl;
    }
}
string reverseWord(string str){
    
  int i=0,j; 
  char temp;
  for(j=0;str[j]!='\0';j++);
  while(i<j)
  {
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      i++;
      j--;
  }
  return str;
}

