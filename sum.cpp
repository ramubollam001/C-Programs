#include<iostream>
using namespace std;
class student
{
    public:
    int a,b,c;
    student()
    {
        cout<<"welcome to program"<<endl;
    }
    void display()
    {
        cout<<"enter a value:";
        cin>>a;
        cout<<"enter b value:";
        cin>>b;
        c=a+b;
        cout<<"sum="<<c;
    }
};
int main()
{
student s1;
s1.display();
}

//output:
//welcome to program
//enter a value:-5
//enter b value:10
//sum=5
