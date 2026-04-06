#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
class stack{
    private:
    node* top;
    public:
    stack(){
        top=NULL;
    }
    void linkedPush(int item){
        node* newnode=new node(item);
        newnode->next=top;
        top=newnode;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack is underflow"<<endl;
            return;
        }
        
            node* temp=top;
                top=top->next;
            delete temp;
    }
   void display(){
       if(top==NULL){
           cout<<"stack is underflow"<<endl;
           return;
       }
       node* temp=top;
       cout<<"stack elements after pop:"<<endl;
       while(temp!=NULL){
           cout<<temp->data<<"->";
           temp=temp->next;
       }
       cout<<"NULL";
}
};
int main(){
    stack s;
    s.linkedPush(10);
    s.linkedPush(20);
    s.linkedPush(30);
    s.pop();
    s.display();
}
/*output:
stack elements after pop:
20->10->NULL
*/
