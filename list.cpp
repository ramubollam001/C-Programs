#include <iostream>
#include<list>
using namespace std;
int main() {
    list<string>perlu={"sathwik","rohith","aryan","nithesh"};
    perlu.push_back("maniii");
    cout<<"after insertion:"<<endl;
    for(string i:perlu)
    cout<<i<<endl;
    perlu.pop_front();
    list<string>::iterator v;
    cout<<"after deletion:"<<endl;
    for(v=perlu.begin();v!=perlu.end();v++){
        cout<<*v<<endl;
    }

    return 0;
}
//output
/*after insertion:
sathwik
rohith
aryan
nithesh
maniii
after deletion:
rohith
aryan
nithesh
maniii*/
