#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node* prev;
  node* next;
  node()
  {
    cout<<"Enter data: ";
    cin>>data;
    prev=NULL;
    next=NULL;
  }
};
void add_at_beg(node *tail)
{
    node* temp= new node;
    
    temp->next=tail->next;
    temp->prev=tail;
    tail->next->prev=temp;
    tail->next=temp;
}
node* add_at_end(node*tail)
{
    node* temp =new node;
    tail->next->prev=temp;
    temp->next=tail->next;
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    return tail;
}
void add_at_pos(node* tail,int pos)
{
  node * ptr = tail->next;
  while(pos>1)
  {  
    ptr=ptr->next;
    pos--;
  }
  node* temp=new node;
  temp->next=ptr; 
  temp->prev=ptr->prev;
  ptr->prev->next=temp;
  ptr->prev=temp;
}
void del_at_beg(node* tail)
{
   node * temp= tail->next;  
   temp->next->prev=tail;
   tail->next=temp->next;
   delete temp;
   temp=NULL;
}
node* del_end(node* tail)
{
    node* temp=tail;
    tail->prev->next=tail->next;
    tail->next->prev=tail->prev;
    tail=tail->prev;
    delete temp;
    temp=NULL;
    return tail;
}
void ShowData(node* tail)
{
    node * head = tail->next;
    do
    {
        cout<<head->data<<"\t";
        head=head->next;
    } while(head!=tail->next);
}
void del_at_pos(node* tail, int pos)
{
  node * temp=tail->next;
    while (pos>1)
    {
        temp=temp->next;
        pos--;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
    temp=NULL;
}
void reverse (node* tail)
{
   node * ptr=tail;
   do
   {
    cout<<ptr->data<<"\t";
    ptr=ptr->prev;
   }while(ptr!=tail);
   
}
int main()
{
   node* tail=new node;
   tail->prev=tail;
   tail->next=tail;
   add_at_beg(tail);
   tail=add_at_end(tail);
   tail=add_at_end(tail);
   tail=add_at_end(tail);
   add_at_pos(tail,3);
   ShowData(tail);
   cout<<endl;
   tail=del_end(tail);
   del_at_pos(tail, 3);
   ShowData(tail);
   cout<<endl;
   ShowData(tail);
   reverse(tail);
}
