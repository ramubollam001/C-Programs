#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>integers={20,30,40,50};
    integers.push_back(12);
    integers.push_back(21);
    cout<<integers.size()<<endl;
    vector<int>::iterator v;
    for(v=integers.begin();v!=integers.end();v++){
        cout<<*v<<",";
    }
    return 0;
}
//output
/*6
20,30,40,50,12,21,*/
