#include<iostream>
using namespace std;
#define MAX 5
class stack{
    private:
    int st[MAX];
    int top;
    public:
    stack(){
        top=-1;
    }
    bool isEmpty(){
        if(top==-1)
            return true;
            else 
            return false;
    }
    bool isFull(){
        if(top==MAX-1)
        return true;
        else
        return false;
    }
    void arrPush(int item){
        if(top==MAX-1){
            cout<<"stack is overflow"<<endl;
            return;
        }
        top++;
        st[top]=item;
        cout<<item<<endl;
    }
   void display(){
       if(top==-1){
           cout<<"stack is empty"<<endl;
           return;
       }
       cout<<"stack elements are:"<<endl;
       for(int i=top;i>=0;i--){
           cout<<st[i]<<endl;
       }
   }
    
};
int main(){
    stack s;
    if(s.isEmpty())
    cout<<"The stack is empty"<<endl;
    s.arrPush(10);
    s.arrPush(20);
    s.arrPush(30);
    s.arrPush(40);
    s.arrPush(50);
    if(s.isFull())
    cout<<"stack is Full"<<endl;
    s.display();
}
/*output
The stack is empty
10
20
30
40
50
stack is Full
stack elements are:
50
40
30
20
10*/
