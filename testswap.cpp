#include<iostream>
using namespace std;
class testswap
{
    public:
    void swap(int a,int b)
    {
        int t;
        t=a;
        a=b;
        b=t;
        cout<<"after swaping:"<<a<<","<<b<<endl;
    }
    void swap(float x,float y)
    {
        float u;
        u=x;
        x=y;
        y=u;
        cout<<"after swaping:"<<x<<","<<y<<endl;
        
    }
    void swap(string m,string n)
    {
        string v;
        v=m;
        m=n;
        n=v;
        cout<<"after swaping:"<<m<<","<<n<<endl;
    }
    
};
int main()
{
    testswap s;
        int a,b;
        cout<<"enter a&b values:";
        cin>>a>>b;
        cout<<"before swapping:"<<a<<","<<b<<endl;
        s.swap(a,b);
        float x,y;
        cout<<"enter x&y values:";
        cin>>x>>y;
        cout<<"before swapping:"<<x<<","<<y<<endl;
        s.swap(x,y);
        string m,n;
        cout<<"enter m&n:";
        cin>>m>>n;
        cout<<"before swapping:"<<m<<","<<n<<endl;
        s.swap(m,n);
    
}
//output:
/*enter a&b values:1
2
before swapping:1,2
after swaping:2,1
enter x&y values:2.5
2
before swapping:2.5,2
after swaping:2,2.5
enter m&n:sathwik
aryan
before swapping:sathwik,aryan
after swaping:aryan,sathwik*/
