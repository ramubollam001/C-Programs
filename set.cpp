#include <iostream>
#include<set>
using namespace std;
int main() {
    set<int>numbers={10,2,55,1};
    numbers.insert(33);
    numbers.insert(9);
    cout<<"sorted integer are:"<<endl;
    for(int x:numbers)
    {
        cout<<x<<endl;
    }
    return 0;
}
//output
/*sorted integer are:
1
2
9
10
33
55*/
