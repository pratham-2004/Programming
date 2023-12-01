#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
    node(int val){
        data=val;
        prev=next=NULL;
    }
};

class Roation{
    public:
    
    void insert_end(node *&head,int k){
        node *nN=new node(k);
        if(head){
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=nN;
            nN->prev=temp;
        }
        else head=nN;
    }

    node* Rotation_k_nodes(node *head,int k){
        int count=1;
        node *temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        if(k==count || k==0) return head;
        temp->next=head;
        head->prev=temp;
        int count2=1;
        node *temp2=head;
        while(count2<k){
            temp2=temp2->next;
            count2++;
        }
        head=temp2->next;
        temp2->next->prev=NULL;
        temp2->next=NULL;
        return head;
    }

    void display(node *head){
        node *temp=head;
        while(temp->next!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data;
    }
};

int main(){
    Roation r1;
    node *head=NULL;
    r1.insert_end(head,10);
    r1.insert_end(head,20);
    r1.insert_end(head,30);
    r1.insert_end(head,40);
    r1.insert_end(head,50);
    r1.insert_end(head,60);
    r1.insert_end(head,70);
    r1.insert_end(head,80);

    r1.display(head);

    head=r1.Rotation_k_nodes(head,5);
    cout<<"\nRotated:\n";
    r1.display(head);
}