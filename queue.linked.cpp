#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node * link;
    node(int n)
    {
        data = n;
        link=NULL;
    }
};
class queue
{
    node* front;
    node* back;
    public:
        queue()
        {
            front=NULL;
            back=NULL;
        }
    void push (int data)
    {
        node * n =new node(data);
        if(front==NULL)
        {
           back=n;
           front = n;
           return;
        }
        back->link =n;
        
    }
    void pop()
    {
        if(front==NULL)
        
    }
    int peek()
    {
        if (front==-1||front>back)
        {
            cout<<"Queue underflow";
            return -1;
        }
        return q_arr[front];
    }
    void print()
    {
        for(int i = front;i<=back;i++)
        {
            cout<<q_arr[i]<<endl;
        }
    }
};