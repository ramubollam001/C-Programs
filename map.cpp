#include <iostream>
#include<map>
using namespace std;
int main() {
    map<int,string>students;
    students[1]="nithesh";
    students[2]="aryan";
    students[3]="rohith";
    map<int,string>::iterator v;
    cout<<"students details are:"<<endl;
    for(v=students.begin();v!=students.end();v++){
        cout<<v->first<<":"<<v->second<<endl;
    }

    return 0;
}
//output
/*students details are:
  1:nithesh
  2:aryan
  3:rohith*/
