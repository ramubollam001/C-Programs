#include<iostream>
using namespace std;
template<typename T>
void swapValue(T a,T b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping:"<<"a="<<a<<","<<"b="<<b<<","<<endl;
}
int main()
{
    int c,d;
    float e,f;
    string g,h;
    cout<<"enter c&d:";
    cin>>c>>d;
    cout<<"before swapping:"<<"c="<<c<<","<<"d="<<d<<","<<endl;
    cout<<"enter e&f:";
    cin>>e>>f;
    cout<<"before swapping:"<<"e="<<e<<","<<"f="<<f<<","<<endl;
    cout<<"enter g&h:";
    cin>>g>>h;
    cout<<"before swapping:"<<"g="<<g<<","<<"h="<<h<<","<<endl;
    swapValue(c,d);
    swapValue(e,f);
    swapValue(g,h);
    
}
//output:
/*enter c&d:1
2
before swapping:c=1,d=2
enter e&f:12.3
1.2
before swapping:e=12.3,f=1.2
enter g&h:rohith
aryan
before swapping:g=rohith,h=aryan
after swapping:a=2,b=1
after swapping:a=1.2,b=12.3
after swapping:a=aryan,b=rohith*/
