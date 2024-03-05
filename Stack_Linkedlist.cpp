#include<iostream>
using namespace std;
class s_node
{
    public:
    int data;
    s_node * link;
    s_node(int n)
    {
        data = n;
        link = NULL;
    }
} * top = NULL;
void push(int data)
{
    s_node* new_node = new s_node(data);
    new_node->link=top;
    top=new_node;
}
void print()
{
    s_node* temp = top;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->link;
        cout<<endl;
    }
}
int main()
{
    push(5);
    push(7);
    push(4);
    print();
}