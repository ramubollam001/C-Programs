#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left,*right;
    node(int value){
        data=value;
        left=right=NULL;
    }
};
class BST{
    private:
    node* root;
    public:
    BST(){
        root=NULL;
    }
    void insert(int value){
        root=insert(root,value);
    }
    node* insert(node* root,int value){
        if(root==NULL)
        return new node(value);
        if(value<root->data)
        root->left=insert(root->left,value);
        else if(value>root->data)
        root->right=insert(root->right,value);
        return root;
    }
    node* findMin(node* root){
        while(root->left!=NULL)
        root=root->left;
        return root;
    }
    void deleteValue(int value){
        root=deletenode(root,value);
    }
    node* deletenode(node* root,int value){
        if(root==NULL)
        return NULL;
        if(value<root->data)
        root->left=deletenode(root->left,value);
        else if(value>root->data)
        root->right=deletenode(root->right,value);
        else{
            if(root->left==NULL&&root->right==NULL){
                delete root;
                return NULL;
            }
            else if(root->left==NULL){
                node* temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                node* temp=root->left;
                delete root;
                return temp;
            }
            else{
                node* temp=findMin(root->right);
                root->data=temp->data;
                root->right=deletenode(root->right,temp->data);
            }
        }
        return root;
    }
    void searchValue(int key){
        if(search(root,key))
        cout<<"element found\n";
        else
        cout<<"element not found\n";
    }
    bool search(node* root,int key){
        if(root==NULL)
        return false;
        if(root->data==key)
        return true;
        else if(key<root->data)
        return search(root->left,key);
        return search(root->right,key);
    }
    void inorder(node* root){
        if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    }
    void preorder(node* root){
        if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    }
     void postorder(node* root){
        if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    }
    void display(){
        cout<<"\n Inorder:";
        inorder(root);
        cout<<"\n Preorder:";
        preorder(root);
        cout<<"\n Postorder:";
        postorder(root);
        cout<<endl;
    }
};
int main(){
    BST tree;
    int value,choice;
    do{
        cout<<"enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter value to insert:";
            cin>>value;
            tree.insert(value);
            break;
            case 2:
            cout<<"enter value to delete:";
            cin>>value;
            tree.deleteValue(value);
            break;
            case 3:
            cout<<"enter value to search:";
            cin>>value;
            tree.searchValue(value);
            break;
            case 4:
            tree.display();
            break;
            case 5:
            cout<<"exiting\n";
            break;
        }
    }while(choice!=5);
}
/*output
enter your choice:1
enter value to insert:10
enter your choice:1
enter value to insert:20
enter your choice:1
enter value to insert:30
enter your choice:1
enter value to insert:21
enter your choice:1
enter value to insert:12
enter your choice:1
enter value to insert:33
enter your choice:4

 Inorder:10 12 20 21 30 33 
 Preorder:10 20 12 30 21 33 
 Postorder:12 21 33 30 20 10 
enter your choice:3
enter value to search:30
element found
enter your choice:2
enter value to delete:30
enter your choice:4

 Inorder:10 12 20 21 33 
 Preorder:10 20 12 33 21 
 Postorder:12 21 33 20 10 
enter your choice:5
exiting*/
