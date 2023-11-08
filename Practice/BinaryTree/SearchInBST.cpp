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

class SearchInBST{
    public:
    
    node* Search(node *root,int val){
        if(root==NULL) return NULL;
        if(val==root->data) return root;
        if(val<root->data) return Search(root->left,val);
        if(val>root->data) return Search(root->right,val);
    }

};

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    SearchInBST b1;
    if(b1.Search(root,10)) cout<<"Found";
    else cout<<"Not Found";
}