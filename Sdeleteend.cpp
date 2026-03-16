#include <iostream>
using namespace std;
class node{
    int data;
    node* next;
    public:
    void insertAtbeg(node* &head,int value){
        node* newnode=new node();
        newnode->data=value;
        newnode->next=head;
        head=newnode;
        cout<<"linked list:"<<endl;
         node* temp=head;
         while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
             temp=temp->next;
        }
    }
    void deleteAtend(node* &head){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
        }
        if(head->next==NULL){
        delete head;
        head=NULL;
        return;
        }
        node* temp=head;
        while(temp->next->next!=NULL){
        temp=temp->next;
        }
        node* last=temp->next;
        temp->next=NULL;
        delete last;
        cout<<"after deletion:";
        while(head!=NULL){
            cout<<head->data<<" ";
             head=head->next;   
        }
    }
   
};
int main() {
    node n1;
    node* head=nullptr;
    n1.insertAtbeg(head,10);
    n1.insertAtbeg(head,20);
    n1.deleteAtend(head);
    return 0;
}
/*output:
linked list:
10 
linked list:
20 
10 
after deletion:20*/
