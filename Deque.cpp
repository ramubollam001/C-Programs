#include<iostream>
using namespace std;
#define SIZE 5
class deque{
    private:
    int dq[SIZE];
    int front,rear;
    public:
    deque(){
        front=-1;
        rear=-1;
    }
    void insertFront(int x){
        if((front==0&&rear==SIZE-1)||(front==rear+1)){
            cout<<"queue is full";
            return;
        }
        else if(front==-1&&rear==-1)
        front=rear=0;
        else if(front==0)
        front=SIZE-1;
        else
        front=front-1;
        dq[front]=x;
    }
    void insertRear(int x){
        if((front==0&&rear==SIZE-1)||(front==rear+1)){
            cout<<"queue is full";
            return;
    }
    else if(front==-1&&rear==-1)
    front=rear=0;
    else if(rear==SIZE-1)
    rear=0;
    else
    rear++;
    dq[rear]=x;
    }
    int deleteFront(){
        if(front==-1&&rear==-1){
            cout<<"queue is empty";
            return -1;
        }
        int item=dq[front];
        if(front==rear)
        front=rear=-1;
        else if(front==SIZE-1)
        front=0;
        else
        front++;
        return item;
    }
    int deleteRear(){
        if(front==-1&&rear==-1){
            cout<<"queue is empty";
            return -1;
        }
        int item=dq[rear];
        if(front==rear)
        front=rear=-1;
        else if(rear==0)
        rear=SIZE-1;
        else
        rear--;
        return item;
    }
    int getFront(){
        if(front==-1){
            cout<<"queue is empty";
            return -1;
        }
        return dq[front];
    }
    int getRear(){
        if(rear==-1){
            cout<<"queue is empty";
            return -1;
        }
        return dq[rear];
    }
    void display(){
        if(front==-1){
            cout<<"deque is empty";
            return;
        }
        cout<<"\n elements in deque are:";
        int i=front;
        while(i!=rear){
            cout<<dq[i]<<" ";
            i=(i+1)%SIZE;
        }
        cout<<dq[rear];
    }
};
int main(){
    deque dq;
    int opt,val;
    int x;
    do{
        cout<<"\n enter option:";
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"enter element:";
            cin>>val;
            dq.insertFront(val);
            break;
            case 2:
            cout<<"enter element:";
            cin>>val;
            dq.insertRear(val);
            break;
            case 3:
            x=dq.deleteFront();
            if(x!=-1)
            cout<<x<<": is deleted from front\n";
            break;
            case 4:
            x=dq.deleteRear();
            if(x!=-1)
            cout<<x<<":is deleted from rear";
            break;
            case 5:
            x=dq.getFront();
            if(x!=-1)
            cout<<x<<":is front element";
            break;
            case 6:
            x=dq.getRear();
            if(x!=-1)
            cout<<x<<":is rear element";
            break;
            case 7:
            dq.display();
            break;
        }
    }while(opt!=8);
}
/*output
enter option:1
enter element:10

 enter option:2
enter element:20

 enter option:1
enter element:30

 enter option:2
enter element:40

 enter option:1
enter element:50

 enter option:2
enter element:60
queue is full
 enter option:7

 elements in deque are:50 30 10 20 40
 enter option:3
50: is deleted from front

 enter option:4
40:is deleted from rear
 enter option:7

 elements in deque are:30 10 20
 enter option:5
30:is front element
 enter option:6
20:is rear element*/
