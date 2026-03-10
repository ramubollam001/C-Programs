#include <iostream>
using namespace std;
class node{
 public:
int data;
node* next;
void insertBeginning(node* &head,int value)
{
    node* newnode=new node();
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void print(node* head)
{
cout<<"linked list:";
while(head!=nullptr)
{
  cout<<head->data<<" "; 
  head=head->next;
}
cout<<"null";
}
};
int main() {
   node n;
   node* head=nullptr;
   n.insertBeginning(head,10);
   n.insertBeginning(head,20);
   n.print(head);
    return 0;
}
//output:
//linked list:20 10 null
