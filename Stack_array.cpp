#include<iostream>
#define max 4
using namespace std;
int stack_arr[max];
int top = -1;
void push(int n)
{
    if (top == max-1)
    {
        cout<<"Stack Oveflow";
        return;
    }
    top=top+1;
    stack_arr[top]=n;
}
int pop()
{
    if(top==-1){
        cout<<"Stack Underflow"<<endl;;
        exit(1);
    }
    int v = stack_arr[top];
    top=top-1;;
    return v;
}
void print()
{
    for(int i=top;i>=0;i--)
    {
        cout<<"\n"<<stack_arr[i];
    }
    cout<<endl;
}
int main()
{
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    cout<<"\nBefore pop()";
    print();
    int a = pop();
    int b =pop();
    cout<<"After Pop";
    print();
}