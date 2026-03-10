#include <iostream>
using namespace std;
class node{
 public:
int data;
node* next;
void insertEnd(node* &head,int value)
{
    node* newnode=new node();
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=newnode;
    
}
void print(node* head)
{
cout<<"linked list:";
node* temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<"null";
}
};
int main() {
   node n;
   node* head=nullptr;
   n.insertEnd(head,10);
   n.insertEnd(head,20);
   n.print(head);
    return 0;
}
//output
//linked list:10 20 null
