#include <iostream>
 using namespace std;

int main()
{
    int rows,col,i,j;
    cout<<"Enter the number of rows:\n";
    cin>>rows;
    cout<<"Enter the number of columns:\n";
    cin>>col;  
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(j<=col+1-i)
            {
                    cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
         }
         cout<<endl;
    }
    return 0;
}
