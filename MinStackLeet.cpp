#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* link;
    node()
    {
        data=0;
        link=NULL;
    }
};
node* head = NULL;
class MinStack {
public:
    
    MinStack() {
        
    }
    
    void push(int val) {
        node* temp = new node;
        temp->data=val;
        temp->link=head;
        head=temp;
    }
    
    void pop() {
        node* temp=head;
        head=head->link;
        delete temp;
        temp=NULL;
    }
    
    int top() {
        return head->data;
    }
    
    int getMin() {
        int ans=INT_MAX;
        node* ptr=head;
        while(ptr!=nullptr)
        {
            ans = min(ptr->data, ans);
            ptr=ptr->link;
        }
        return ans;
    }
};
int main()
{
    MinStack minStack;
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
cout<< minStack.getMin()<<endl; // return -3
minStack.pop();
cout<< minStack.top()<<endl;    // return 0
cout<< minStack.getMin()<<endl; // return -2
MinStack A;
A.push(-1);
cout<< A.top()<<endl;    // return 0
cout<< A.getMin()<<endl; // return -2
}