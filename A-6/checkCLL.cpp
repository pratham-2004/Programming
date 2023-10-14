#include<iostream>
using namespace std;

class node{
    public:
    char character;
    node *next;
    node *prev;
    node(char c){
        character=c;
        next=NULL;
        prev=NULL;
    }
};

class LL{
    public:
    void CLL(node *head){
        node *temp=head;
        if(head->next==head){
            cout<<"CircularLinkedList";
            return;
        }
        else if(head==NULL){
            "Empty Linked List";
            return;
        }
        int count=100;
        while(count){
            if(temp->next==NULL){
                cout<<"Not a CircularLinkedList";
                return;
            }
            else if(temp->next==head){
                cout<<"CircularLinkedList";
                return;
            }
            temp=temp->next;
            count--;
        }
        cout<<"Linked List Exceeding max size";
    }
};
    
int main(){
    LL L;
    node *head=new node(1);
    node *second=new node(2);
    node *third=new node(3);
    node *fourth=new node(4);
    head->next=second;
    head->prev=fourth;
    second->next=third;
    second->prev=head;
    third->next=fourth;
    third->prev=second;
    fourth->next=head;
    fourth->prev=third;
    L.CLL(head);
}