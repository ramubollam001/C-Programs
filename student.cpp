#include <iostream>
using namespace std;
class student
{
    int rollno,marks;
    string sec,name;
    public:
    student()
    {
        cout<<"welcome"<<endl;
        cout<<"enter your details"<<endl;
    }
    void display()
    {
        cout<<"enter your name:";
        cin>>name;
        cout<<"enter your roll number:";
        cin>>rollno;
        cout<<"enter your section:";
        cin>>sec;
        cout<<"enter your marks:";
        cin>>marks;
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<rollno<<endl;
        cout<<"Section:"<<sec<<endl;
        cout<<"Total marks:"<<marks<<endl;
    }
    ~student()
    {
        cout<<"thank you";
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}
//output:
//welcome
//enter your details
//enter your name:Ramu
//enter your roll number:21
//enter your section:c
//enter your marks:123
//Name:Ramu
//Roll number:21
//Section:c
//Total marks:123
//thank you
