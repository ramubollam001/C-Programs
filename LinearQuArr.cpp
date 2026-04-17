#include<iostream>
using namespace std;
#define MAX 6
class queue{
    private:
    int qu[MAX];
    int front,rear;
    public:
    queue(){
        rear=-1;
        front=-1;
    }
    void enqueue(int item){
        if(rear==MAX-1){
            cout<<"queue is full\n";
        }
        else if(front==-1&&rear==-1){
            front=rear=0;
        }
        else{
            rear++;
        }
        qu[rear]=item;
    }
    int dequeue(){
        int item;
        if(front==-1||front>rear){
            cout<<"queue is empty\n";
            return -1;
        }
        else{
            item=qu[front];
            front++;
            if(front>rear)
            front=rear=-1;
            return item;
        }
    }
    int peek(){
        if(front==-1||front>rear){
            cout<<"the queue is empty\n";
            return -1;
        }
        else 
        return qu[front];
    }
    void display(){
        if(front==-1||front>rear){
            cout<<"\n the queue is empty";
        }
            else{
            cout<<"\n the queue elements are:";
            for(int i=front;i<=rear;i++)
            cout<<qu[i]<<" ";
        }
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
            cout<<"deleted elment="<<val;
            break;
            case 3:
            val=q.peek();
            if(val!=-1)
            cout<<"\n front element="<<val;
            break;
            case 4:
            q.display();
            break;
        }
        cout<<endl;
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

 the queue elements are:10 20 30 
enter your option:2
deleted elment=10
enter your option:4

 the queue elements are:20 30 
enter your option:1
enter element to insert:40

enter your option:1
enter element to insert:50

enter your option:1
enter element to insert:60

enter your option:1
enter element to insert:70
queue is full

enter your option:3

 front element=20
enter your option:4

 the queue elements are:20 30 40 50 70 
enter your option:1
enter element to insert:80
queue is full*/
