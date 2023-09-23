#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(){
        this->data=0;
        this->next=NULL;
    }
};

class Linkedlist{
    public:
    node *head=NULL;
    node *temp;
    
    void insert_beg(int value){
        node *newnode=new node();
        newnode->data=value;
        newnode->next=head;
        head=newnode;
    }

    void reverse(){
        if(head==NULL) return;
        temp=NULL;
        node *current=head;
        while(current!=NULL){
            node *p=current->next;
            current->next=temp;
            temp=current;
            current=p;
        }
        head=temp;
    }

    void transverse(){
        node* temp=head;
        if(head==NULL) cout<<"Empty linked list\n";
        else{
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};

int main(){
    Linkedlist L1;
    L1.insert_beg(50);
    L1.insert_beg(40);
    L1.insert_beg(30);
    L1.insert_beg(20);
    L1.insert_beg(10);   
    L1.transverse();
    L1.reverse();
    L1.transverse();
}