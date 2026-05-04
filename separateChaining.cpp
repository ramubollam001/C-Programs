#include<iostream>
#include<list>
using namespace std;
class hashTable{
    int size;
    list<int>* table;
    public:
    hashTable(int s){
        size=s;
        table=new list<int>[size];
    }
    int hashFunction(int key){
        return key%size;
    }
    void insert(int key){
        int index=hashFunction(key);
        table[index].push_back(key);
    }
    void remove(int key){
        int index=hashFunction(key);
        table[index].remove(key);
    }
    bool search(int key){
        int index=hashFunction(key);
        for(int x:table[index]){
            if(x==key)
            return true;
        }
        return false;
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<i<<"-->";
            for(int x:table[i]){
                cout<<x<<"->";
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
    hashTable h(7);
    h.insert(50);
    h.insert(700);
    h.insert(76);
    h.insert(85);
    h.insert(92);
    h.insert(73);
    h.insert(101);
    cout<<"Hash table:\n";
    h.display();
    int key;
    cout<<"enter the key to search"<<endl;
    cin>>key;
    if(h.search(key))
    cout<<"key is found"<<endl;
    else
    cout<<"key is not found"<<endl;
    cout<<"enter the key to delete"<<endl;
    cin>>key;
    h.remove(key);
    cout<<"After deleting Hash table:\n";
    h.display();
}
/*output
Hash table:
0-->700->NULL
1-->50->85->92->NULL
2-->NULL
3-->73->101->NULL
4-->NULL
5-->NULL
6-->76->NULL
enter the key to search
12
key is not found
enter the key to delete
92
After deleting Hash table:
0-->700->NULL
1-->50->85->NULL
2-->NULL
3-->73->101->NULL
4-->NULL
5-->NULL
6-->76->NULL*/
