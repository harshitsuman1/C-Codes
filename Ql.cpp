#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node * next;
    node(int n)
    {
        val=n;
        next=NULL;
    }
};
class MyLinkedList {
public:
    node * head = NULL;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        node * ptr = head;
        int c=-1;
        if(index<0) {return -1;}
        else{
            while(ptr!=NULL)
           {
            c++;
            if(c==index)
            {
                return ptr->val;
            }
            ptr=ptr->next;
           }
           return -1;
        }
    }
    
    void addAtHead(int val) {
        if(head==NULL)
        {
            node * temp = new node(val);
            head = temp;
        }
        else
        {
            node* temp = new node(val);
            temp->next = head;
            head=temp;
        }
    }
    
    void addAtTail(int val) {
        node * ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        node * temp = new node(val);
        ptr->next=temp;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0)
            return;
        if(index==0)
        {
            addAtHead(val);
        }
        else
        {
            node * ptr = head;
            while(index>1)
            {
                ptr=ptr->next;
                index--;
            }
            
            if(ptr->next==NULL)
            {
                addAtTail(val);
            }
            else
            {
                node * temp=new node(val);
                temp->next=ptr->next;
                ptr->next=temp;
            }
        }
    }
    
    void deleteAtIndex(int index) {
         if(index<0)
            return;
        /*if(index==0)
        {
            ;
        }
        else*/
        //{
            node * ptr = head;
            while(index>1)
            {
                ptr=ptr->next;
                index--;
            }
            ptr->next=ptr->next->next;
            node * temp= ptr->next;
            delete temp;
            temp=NULL;
            
            //if(ptr->next==NULL)
            //{
               // addAtTail(val)
            //}
            //else
            //{
                //node * temp=new node(val);
                //temp->next=ptr->next;
                //ptr->next=temp;
            //}
        //}
    }
};
int main()
{
    MyLinkedList myLinkedList;
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
myLinkedList.get(1);              // return 2
myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
myLinkedList.get(1);              // return 3
}