#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

class splitCLL{
    
    public:
    
    void splitintotwo(node *head){
        node *temp=head;
        node *head1=head;
        node *head2;
        int count=0;
        while(temp->next!=head){
            temp=temp->next;
            count++;
        }
        count++;
        int x=count/2;
        if(x%2==0) x=x-1;
        node *temp2=head;
        while(x){
            temp2=temp2->next;
            x--;
        }
        head2=temp2->next;
        temp->next=head2;
        temp2->next=head1;
        display(head1);
        display(head2);
    }

    void display(node *head){
        node *temp=head;
        while(temp->next!=head){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<temp->data;
        cout<<endl;
    }
};

int main(){
    splitCLL C1;
    node *head=new node(1);
    node *sec=new node(2);
    node *third=new node(3);
    node *fourth=new node(4);
    head->next=sec;
    sec->next=third;
    // third->next=head;
    third->next=fourth;
    fourth->next=head;
    C1.splitintotwo(head);
}