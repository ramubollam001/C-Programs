#include<iostream>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode* left;
    treeNode* right;
    treeNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
class binaryTree{
    private:
    treeNode* root;
    public:
    binaryTree(){
        root=nullptr;
    }
    treeNode* insertRecursive(treeNode* node,int value){
        if(node==nullptr){
            return new treeNode(value);
        }
        char choice;
        cout<<"insert"<<value<<"to left or right of"<<node->data<<"?(l/r):";
        cin>>choice;
        if(choice=='l'||choice=='L'){
            node->left=insertRecursive(node->left,value);
        }
        else{
            node->right=insertRecursive(node->right,value);
        }
        return node;
    }
    void insert(int value){
        if(root==nullptr){
            root=new treeNode(value);
            cout<<value<<"inserted as root:"<<endl;
        }
        else{
            root=insertRecursive(root,value);
        }
    }
    void inorder(){
        cout<<"inorder traversal:";
        inorderRecursive(root);
        cout<<endl;
    }
    void inorderRecursive(treeNode* node){
        if(node==nullptr)
        return;
        inorderRecursive(node->left);
        cout<<node->data<<" ";
        inorderRecursive(node->right);
    }
    void preorder(){
        cout<<"preorder traversal:";
        preorderRecursive(root);
        cout<<endl;
    }
    void preorderRecursive(treeNode* node){
        if(node==nullptr)
        return;
        cout<<node->data<<" ";
        preorderRecursive(node->left);
        preorderRecursive(node->right);
    }
    void postorder(){
        cout<<"postorder traversal:";
        postorderRecursive(root);
        cout<<endl;
    }
    void postorderRecursive(treeNode* node){
        if(node==nullptr)
        return;
        postorderRecursive(node->left);
        postorderRecursive(node->right);
        cout<<node->data<<" ";
    }
};
int main(){
    binaryTree tree;
    int choice,value;
    do{
        cout<<"enter choice:";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter value to insert:";
            cin>>value;
            tree.insert(value);
            break;
            case 2:
            tree.inorder();
            break;
            case 3:
            tree.preorder();
            break;
            case 4:
            tree.postorder();
            break;
            case 5:
            cout<<"exiting"<<endl;
            break;
            default:
            cout<<"invalid choice";
        }
    }while(choice!=5);
    }
/*output:
enter choice:1
enter value to insert:10
10inserted as root:
enter choice:1
enter value to insert:20
insert20to left or right of10?(l/r):l
enter choice:1
enter value to insert:30
insert30to left or right of10?(l/r):l
insert30to left or right of20?(l/r):r
enter choice:1
enter value to insert:40
insert40to left or right of10?(l/r):r
enter choice:1
enter value to insert:50
insert50to left or right of10?(l/r):r
insert50to left or right of40?(l/r):l
enter choice:2
inorder traversal:20 30 10 50 40 
enter choice:3
preorder traversal:10 20 30 40 50 
enter choice:4
postorder traversal:30 20 50 40 10 
enter choice:5
exiting*/
