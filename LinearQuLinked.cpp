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
class queue{
    private:
    node* front;
    node* rear;
    public:
    queue(){
        front=rear=NULL;
    }
    void enqueue(int item){
        node* newnode=new node(item);
        if(front==NULL){
            front= rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }
    int dequeue(){
        if(front==NULL){
            cout<<"\n queue is empty";
            return -1;
        }
        node* temp=front;
        int x=front->data;
        front=front->next;
        delete temp;
        if(front==NULL)
        rear=NULL;
        return x;
    }
    int peek(){
         if(front==NULL){
            cout<<"\n queue is empty";
            return -1;
        }
        return front->data;
    }
    void display(){
         if(front==NULL){
            cout<<"\n queue is empty";
            return;
        }
        node* temp=front;
        cout<<"\n queue element are:";
        while(temp!=rear){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<rear->data<<" ";
        cout<<endl;
    }
};
int main(){
    queue q;
    int opt,val;
    do{
        cout<<"enter your option:";
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"enter element to insert:";
            cin>>val;
            q.enqueue(val);
            break;
            case 2:
            val=q.dequeue();
            if(val!=-1)
            cout<<"deleted elment="<<val<<endl;
            break;
            case 3:
            val=q.peek();
            if(val!=-1)
            cout<<"\n front element="<<val<<endl;
            break;
            case 4:
            q.display();
            break;
        }
    }while(opt!=5);
}
/*output
enter your option:1
enter element to insert:10
enter your option:1
enter element to insert:20
enter your option:1
enter element to insert:30
enter your option:4

 queue element are:10 20 30 
enter your option:2
deleted elment=10
enter your option:4

 queue element are:20 30 
enter your option:3

 front element=20*/
