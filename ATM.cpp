#include<iostream>
using namespace std;
class ATM
{
    public:
    int balance,withdrawnamount,remainingamount;
    ATM()
    {
        balance=50000;
        cout<<"insert the card"<<endl;
        cout<<"enter PIN"<<endl;
        cout<<"session started"<<endl;
    }
    void display()
    {
        cout<<"enter withdrawn amount:";
        cin>>withdrawnamount;
        if(withdrawnamount>balance){
        cout<<"insufficient balance";
        }
        else{
        remainingamount=balance-withdrawnamount;
        cout<<"remaining balance:"<<remainingamount;
        }
    }
};
int main()
{
ATM u;
u.display();
}

//insert the card
//enter PIN
//session started
//enter withdrawn amount:45000
//remaining balance:5000
