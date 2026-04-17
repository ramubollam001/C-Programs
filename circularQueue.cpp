#include<iostream>
using namespace std;
#define MAX 6
class circularQueue{
    private:
    int qu[MAX];
    int front,rear;
    public:
    circularQueue(){
        rear=-1;
        front=-1;
    }
    void enqueue(int item){
        if((front==0&&rear==MAX-1)||(rear+1==front)){
            cout<<"queue is full\n";
            return;
        }
        if(front==-1)
            front=rear=0;
            else if(rear==MAX-1)
            rear=0;
        else
            rear++;
        qu[rear]=item;
    }
    int dequeue(){
        if(front==-1){
            cout<<"queue is empty\n";
            return -1;
        }
        int item=qu[front];
        if(front==rear)
            front=rear=-1;
            else if(front==MAX-1)
            front=0;
        else
            front++;
            return item;
    }
    int peek(){
        if(front==-1){
            cout<<"the queue is empty\n";
            return -1;
        }
        else 
        return qu[front];
    }
    void display(){
        if(front==-1){
            cout<<"\n the queue is empty";
            return;
        }
            else{
            cout<<"\n the circularqueue elements are:";
            int i=front;
            while(i!=rear){
            cout<<qu[i]<<" ";
            i=(i+1)%MAX;
        }
        cout<<qu[rear];
    }
    }
};
int main(){
    circularQueue cq;
    int opt,val;
    do{
        cout<<"enter your option:";
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"enter element to insert:";
            cin>>val;
            cq.enqueue(val);
            break;
            case 2:
            val=cq.dequeue();
            if(val!=-1)
            cout<<"deleted elment="<<val;
            break;
            case 3:
            val=cq.peek();
            if(val!=-1)
            cout<<"\n front element="<<val;
            break;
            case 4:
            cq.display();
            break;
        }
        cout<<endl;
    }while(opt!=5);
}
