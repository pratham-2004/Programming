#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

class BinaryTreeTraversal{
    public:
    void preorder(node *root){
        if(root==NULL) return;
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(node *root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
    void postorder(node *root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
};

int main(){
    BinaryTreeTraversal BT1;
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->right=new node(5);
    BT1.inorder(root);
    cout<<endl;
    BT1.postorder(root);
    cout<<endl;
    BT1.preorder(root);
    cout<<endl;
}