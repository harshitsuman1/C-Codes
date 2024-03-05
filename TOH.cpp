#include<iostream>
using namespace std;
void toh(int n, char source, char temp,char dest)
{
    if (n > 0)
    {
       toh(n-1,source,dest,temp);
       cout<<"Move disk "<<n<<" "<<source <<" -> "<<dest<<endl;
       toh(n-1,temp, source, dest);
    }
}
int main()
{
    int n;
    char source='S',temp='T',dest='D';
    cout<<"Enter number of disk";
    cin>>n;
    toh(n,source,temp,dest);
}
