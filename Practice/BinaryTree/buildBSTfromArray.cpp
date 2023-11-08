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

class buildBST{
    public:

    node* insertIntoBSTfromArr(node* root,int val){
        if(root==NULL) return new node(val);
        if(val<root->data) root->left=insertIntoBSTfromArr(root->left,val);
        else root->right=insertIntoBSTfromArr(root->right,val);
        return root;
    }

    void inorder(node *root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
};


int main(){
    buildBST B1;
    int arr[]={4,3,7};
    node *root=NULL;
    int i=0;
    while(i<3){
        root=B1.insertIntoBSTfromArr(root,arr[i]);
        i++;
    }
    B1.inorder(root);
}