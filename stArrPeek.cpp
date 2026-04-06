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
    void arrPush(int item){
        if(top==MAX-1){
            cout<<"stack is overflow"<<endl;
            return;
        }
        top++;
        st[top]=item;
        cout<<item<<endl;
    }
    void peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"Top element of stack is:"<<st[top];
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
    s.arrPush(10);
    s.arrPush(20);
    s.arrPush(30);
    s.display();
    s.peek();
}
/*output
10
20
30
stack elements are:
30
20
10
Top element of stack is:30*/
