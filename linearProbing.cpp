#include<iostream>
using namespace std;
#define SIZE 7
class hashTable{
    int table[SIZE];
    public:
    hashTable(){
        for(int i=0;i<SIZE;i++)
        table[i]=-1;
    }
    int hashFunction(int key){
        return key%SIZE;
    }
    void insert(int key){
        int index=hashFunction(key);
        if(table[index]==-1){
            table[index]=key;
        }
        else{
            int i=1;
            while(i<SIZE){
                int newInd=(index+i)%SIZE;
                if(table[newInd]==-1){
                table[newInd]=key;
                return;
            }
            i++;
        }
        cout<<"Hash table is Full\n";
    }
    }
    void search(int key){
        int index=hashFunction(key);
        int i=0;
        while(i<SIZE){
            int newInd=(index+i)%SIZE;
            if(table[newInd]==key){
                cout<<"Element "<<key<<"found at index"<<newInd<<endl;
                return;
            }
            if(table[newInd]==-1)
            break;
            i++;
        }
        cout<<"Element not found\n";
    }
    void display(){
        cout<<"\n Hash table:\n";
        for(int i=0;i<SIZE;i++){
            cout<<i<<"-->";
            if(table[i]==-1)
            cout<<"Empty";
            else
            cout<<table[i];
            cout<<endl;
        }
    }
        void remove(int key){
        int index=hashFunction(key);
        int i=0;
        while(i<SIZE){
            int newInd=(index+i)%SIZE;
            if(table[newInd]==key){
                cout<<"Element "<<key<<" is deleted"<<endl;
                table[newInd]=-1;
                return;
            }
            i++;
        }
    }
};
int main(){
    hashTable h;
    int n,key;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>key;
        h.insert(key);
    }
    h.display();
    cout<<"enter key to delete:";
    cin>>key;
    h.remove(key);
    h.display();
    cout<<"\n enter element to search:";
    cin>>key;
    h.search(key);
}
/*output
enter number of elements:7
enter elements:
1
8
2
3
4
5
7

 Hash table:
0-->7
1-->1
2-->8
3-->2
4-->3
5-->4
6-->5
enter key to delete:7
Element 7 is deleted

 Hash table:
0-->Empty
1-->1
2-->8
3-->2
4-->3
5-->4
6-->5

 enter element to search:8
Element 8found at index2*/
