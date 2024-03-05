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
node* add_at_beg(node *head)
{
    node* temp= new node;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
void add_at_end(node*ptr)
{
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    node* temp =new node;
    ptr->next=temp;
    temp->prev=ptr;
}
void add_at_pos(node* ptr,int n)
{
  int count=0;
  while(ptr!=NULL)
  {
    count++;
    if(count==n-1)
     break;  
    ptr=ptr->next;
  }
  node* temp=new node;
  ptr->next->prev=temp;
  temp->next=ptr->next;
  temp->prev=ptr;
  ptr->next=temp;
}
node* del_at_beg(node* head)
{
   head= head->next;  
   delete head->prev;
   head->prev=NULL;
   return head;
}
void ShowData(node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<"\t"<<ptr->data;
        ptr=ptr->next;
    }
}
node * del_at_pos(node* head, int pos)
{
  node * temp=head;
  if(pos==1)
  {
    head=del_at_beg(head);
    return head;
  }
  else
  {
    while (pos!=1)
    {
        temp=temp->next;
        pos--;
    }
    if(temp->next==NULL)
    {
      temp->prev->next=NULL;
      delete temp;
      temp = NULL;
      return head;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
    temp = NULL;
    return head;
  }
}
node* reverse (node* head)
{
   node* temp2=NULL;
   node* temp1=NULL;
   while(head!=NULL)
   {
      temp2=head->next;
      head->next=temp1;
      head->prev=temp2;
      temp1=head;
      head=temp2;
   }
   head=temp1;
   temp1 =NULL;
   return head;
}
int main()
{
   node* head=new node;
   head=add_at_beg(head);
   add_at_end(head);
   add_at_end(head);
   add_at_end(head);
   //add_at_pos(head,4);
   ShowData(head);
   head=del_at_pos(head, 3);
   cout<<endl;
   head=reverse(head);
   ShowData(head);

}
