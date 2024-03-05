#include<iostream>
using namespace std;
class node
{
   public:
   int data;
   node* link;
   node()
   {
    cout<<"Enter data";
    cin>>data;
    link = NULL;
   } 
};
//Insert at beginning
node* add_at_beg(node* head)
{
   node* temp = new node;
   temp->link=head;
   head=temp;
   return head;
}
//Insert at end
void add_at_end(node* head)
{
   node* ptr=head;
   while(ptr->link!=NULL)
   {
      ptr=ptr->link;
   }
   node *temp=new node;
   ptr->link=temp;

}
//Insert at any position
void add_at_pos(node * head, int n)
{
   int c=0;
   node* temp=new node;
   while(head!=NULL)
   {
      c++;
      if(c==n-1) break;
      head=head->link;
   }
   temp->link=head->link;
   head->link=temp;
}
//delete at begining
node* del_at_beg(node* head)
{
   node*temp=head;
   head= head->link;  
   delete temp;
   temp=NULL;
   return head;
}
//delete at end
void del_at_end(node* head)
{;

   while(head->link->link!=NULL)
   {
      head=head->link;
   }
   delete head->link;
   head->link=NULL;
}
//delete at any position
void del_at_pos(node*head, int n)
{
   int c=0;
   while(head!=NULL)
   {
      c++;
      if(c==n-1) break;
      head=head->link;
   }
   node * temp=head->link;
   head->link=head->link->link;
   delete temp;
   temp=NULL;
}
//delete whole linked list
node* del(node*head)
{ 
   node* temp = NULL;
   while(head!=NULL)
   {
      temp=head;
      head=head->link;
      delete(temp);
      temp=NULL;
   }
   return head;
}
//reverse the list
node * reverse(node* head)
{
   node* temp=NULL;
   node* temp2=NULL;
   while (head!=NULL)
   {
      temp2=head->link;
      head->link=temp;
      temp=head;
      head=temp2;
   }
   head=temp;
   temp=NULL;
   return head;
}
void ShowData(node* head)
{
   node *ptr=head;
   if (head==NULL)
   {
      cout<<"Linked list is empty";
   }
   while(ptr!=NULL)
   {
      cout<<"\t"<<ptr->data;
      ptr=ptr->link;
   }
}

int main()
{
   node* head=NULL;
   int n;
   //head = new node;
   head=add_at_beg(head);
   // add_at_end(head);
   // add_at_end(head);
   // add_at_end(head);
   ShowData(head);
   /*cout<<"Enter the position";
   cin>>n;
   add_at_pos(head, n);
   ShowData(head);
   head=del_at_beg(head);
   cout<<endl;
   ShowData(head);*/
   //del_at_end(head);
   cout<<endl;
   ShowData(head);
   /*del_at_pos(head,n);
   ShowData(head);
   head=del(head);
   cout<<endl;
   head=reverse(head);
   ShowData(head);*/
}

