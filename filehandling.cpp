#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    fin>>ch;
    /*while(!fin.eof())
    {
       cout<<fin.tellg();
       fin>>ch;
    }*/
    //fin.seekg(, ios_base::end);
    //cout<<endl;
    cout<<fin.tellg();
    fin>>ch;
    cout<<fin.tellg();
    fin>>ch;
    cout<<fin.tellg();
    fin>>ch;
    cout<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(-4,ios::end);
    cout<<fin.tellg();
    cout<<(char)fin.get();
}