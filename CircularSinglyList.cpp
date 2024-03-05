#include<iostream>
using namespace std;
class node
{
   public:
   int data;
   node* next;
   node()
   {
    cout<<"Enter data";
    cin>>data;
    next = NULL;
   } 
};
//Insert at beginning
node* add_at_beg(node* tail)
{
   node* temp = new node;
   temp->next=tail->next;
   tail->next=temp;
   return tail;
}
//Insert at end
node* add_at_end(node* tail)
{
   node *temp=new node;
   temp->next=tail->next;
   tail->next=temp;
   tail=temp;
   return tail;

}
//Insert at any position
void add_at_pos(node * tail, int pos)
{
   node * head=tail->next;
   node* temp=new node;
   while(pos-1>1)
   {
      head=head->next;
      pos--;
   }
   temp->next=head->next;
   head->next=temp;
}
//delete at begining
node* del_at_beg(node* tail)
{
   node*temp=tail;
   tail= tail->next;  
   delete temp;
   temp=NULL;
   return tail;
}
//delete at end
void del_at_end(node* tail)
{;

   while(tail->next->next!=NULL)
   {
      tail=tail->next;
   }
   delete tail->next;
   tail->next=NULL;
}
//delete at any position
void del_at_pos(node*tail, int n)
{
   int c=0;
   while(tail!=NULL)
   {
      c++;
      if(c==n-1) break;
      tail=tail->next;
   }
   node * temp=tail->next;
   tail->next=tail->next->next;
   delete temp;
   temp=NULL;
}
//delete whole nexted list
node* del(node*tail)
{ 
   node* temp = NULL;
   while(tail!=NULL)
   {
      temp=tail;
      tail=tail->next;
      delete(temp);
      temp=NULL;
   }
   return tail;
}
//reverse the list
node * reverse(node* tail)
{
   node* temp=NULL;
   node* temp2=NULL;
   while (tail!=NULL)
   {
      temp2=tail->next;
      tail->next=temp;
      temp=tail;
      tail=temp2;
   }
   tail=temp;
   temp=NULL;
   return tail;
}
int count_of_nodes(node * tail)
{
    int count=0;
    node * head= tail->next;
    do
    {
        head=head->next;
        count++;
    } while(head!=tail->next);
    return count;

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
int main()
{
   node* tail=NULL;
   int n;
   tail = new node;
   tail->next=tail;
   /*tail=add_at_beg(tail);
   tail=add_at_beg(tail);
   tail=add_at_beg(tail);
   tail=add_at_beg(tail);
   tail=add_at_beg(tail);*/
   tail=add_at_end(tail);
   tail=add_at_end(tail);
   tail=add_at_end(tail);
   ShowData(tail);
   cout<<"Enter the position";
   cin>>n;
   add_at_pos(tail, n);
   ShowData(tail);
   //tail=del_at_beg(tail);
   //cout<<endl;
   //ShowData(tail);
   //del_at_end(tail);
   //ShowData(tail);
   cout<<endl;
   cout<<count_of_nodes(tail);
   /*del_at_pos(tail,n);
   ShowData(tail);
   tail=del(tail);
   cout<<endl;
   tail=reverse(tail);
   ShowData(tail);*/
}