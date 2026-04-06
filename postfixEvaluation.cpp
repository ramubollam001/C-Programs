#include<iostream>
#include<string>
#include<cctype>
using namespace std;
#define MAX 100
class postfixEvaluation{
    private:
    int st[MAX];
    int top;
    public:
    postfixEvaluation(){
        top=-1;
    }
    void push(int val){
        if(top==MAX-1)
        cout<<"stack is overflow"<<endl;
        else{
            top++;
            st[top]=val;
        }
    }
    int pop(){
        if(top==-1){
        cout<<"stack is underflow"<<endl;
        return -1;
        }
        else
        return st[top--];
    }
    int evalPost(char expn[]){
        int x,y,res,i=0;
        while(expn[i]!='\0'){
            if(isdigit(expn[i]))
            push(expn[i]-'0');
            else{
                y=pop();
                x=pop();
                switch(expn[i]){
                case '+':res=x+y;break;
                case '-':res=x-y;break;
                case '*':res=x*y;break;
                case '/':res=x/y;break;
                case '%':res=x%y;break;
                }
                push(res);
            }
            i++;
        }
        return pop();
    }
};
int main(){
     postfixEvaluation obj;
     char expn[100];
     cout<<"enter the postfix expression:"<<endl;
     cin.getline(expn,100);
     int result=obj.evalPost(expn);
     cout<<"postfix expression result:\n"<<result;
}
/*output
enter the postfix expression:
934*5+4/-
postfix expression result:
5*/
