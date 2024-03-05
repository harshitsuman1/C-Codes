#include<bits/stdc++.h>
using namespace std;

int FaultyP(int tot,float sum,int ind,int *forces){
 if(sum == 0 ) return 1;
 if(ind>=tot) return 0;
 
 return (FaultyP(tot,sum-forces[ind],ind+1,forces) || FaultyP(tot,sum+forces[ind],ind+1,forces));   
 
}
int main(){
 // Recursion is used here
 int tot,sum,flag=0;  cin>>tot;
 string ignore;
 cin>>sum>>ignore;
 
 int forces[tot];
 for(int i=0;i<tot;i++){
  cin>>forces[i];
 }
 // Recursion is used here but dp can also be implemented
 for(int i=0;i<tot;i++){
 // Loop through each subarray inital value
 flag= FaultyP(tot,sum,i,forces);
 if(flag==1) { break;}
 }
   if(flag==1) printf("Possible");
   else printf("Not Possible");
return 0;
}