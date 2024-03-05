#include<iostream>
#define max 4
using namespace std;
class queue
{
    int *q_arr;
    int front, back;
    public:
        queue()
        {
            q_arr = new int[max];
            front = -1;
            back = -1;
        }
    void push (int n)
    {
        if(back==max-1)
        {
            cout<<"Queue Overflow";
            return;
        }
        back++;
        q_arr[back]=n;
        if(front==-1)
          front++;
    }
    void pop()
    {
        if (front==-1||front>back)
        {
            cout<<"Queue underflow";
            return;
        }
        int val = q_arr[front];
        front++;
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
int main()
{
    queue q;
    q.push(5);
    q.push(2);
    q.push(4);
    q.push(2);
    //q.push(5);
    //q.print();
    q.pop();
    cout<<q.peek();
    q.print();
    q.pop();
    cout<<q.peek();


}
