#include<iostream>
#include<string>
#include<cctype>
using namespace std;
#define SIZE 100
class InfixtoPostfix{
    private:
    char stack[SIZE];
    int top;
    public:
    InfixtoPostfix(){
        top=-1;
    }
    void push(char item){
        if(top==SIZE-1)
        cout<<"stack is full";
        else
        stack[++top]=item;
    }
    char pop(){
        if(top==-1){
        cout<<"stack is empty";
        return'\0';
        }
        else
        return stack[top--];
    }
    int priority(char op){
        if(op=='+'||op=='-')
        return 0;
        else
        return 1;
    }
    void convert(){
        char in[30],post[30];
        int i,j=0;
        cout<<"enter infix expression"<<endl;
        cin.getline(in,30);
        for(i=0;in[i]!='\0';i++){
            if(in[i]=='(')
            push(in[i]);
            else if(isalnum(in[i]))
            post[j++]=in[i];
            else if(in[i]==')'){
                while(top>-1&&stack[top]!='(')
                post[j++]=pop();
                pop();
            }
            else{
                while(top>-1&&stack[top]!='('&&priority(stack[top])>=priority(in[i]))
                post[j++]=pop();
                push(in[i]);
            }
        }
        while(top>-1){
        post[j++]=pop();
        post[j]='\0';
        cout<<"postfix expressionis:"<<post;
}
    }
    };
    int main(){
        InfixtoPostfix obj;
        obj.convert();
    }
/*output
enter infix expression
(a+b)*c
postfix expressionis:ab+c*
*/
