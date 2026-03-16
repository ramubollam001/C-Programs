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
    }
    void display(node* &head){
        cout<<"linked list:"<<endl;
         node* temp=head;
         while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
             temp=temp->next;
        }
    }
    void search(node* &head,int key){
        node* temp=head;
        int pos=1;
        while(temp!=NULL){
        if(temp->data==key){
        cout<<"element found at position:"<<pos<<endl;
        return;
        }
        temp=temp->next;
        pos++;
        }
        cout<<"element is not found";
    }
   
};
int main() {
    node n1;
    node* head=nullptr;
    n1.insertAtbeg(head,10);
    n1.insertAtbeg(head,20);
    n1.insertAtbeg(head,12);
    n1.insertAtbeg(head,30);
    n1.display(head);
    n1.search(head,20);
    return 0;
}
/*output:
linked list:
30 
12 
20 
10 
element found at position:3*/
