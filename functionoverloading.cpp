#include<iostream>
using namespace std;
class addition
{
    public:
    void add(int a,int b)
    {
        
        cout<<"sum="<<a+b<<endl;
    }
    void add(float x,float y)
    {
        
        cout<<"sum="<<x+y<<endl;
        
    }
    
};
int main()
{
    addition s;
    int a,b;
        cout<<"enter a&b values:";
        cin>>a>>b;
        s.add(a,b);
        float x,y;
        cout<<"enter x&y values:";
        cin>>x>>y;
    s.add(x,y);
}

//output:
//enter a&b values:2
//3
//sum=5
//enter x&y values:2.3
//12.2
//sum=14.5
