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

class DLL{
    public:

    bool palindrome(node *head){
        node *temp=head;
        node *start=head;
        node *end;
        bool flag=true;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        end=temp;
        while(start!=end){
            if(start->character==end->character){
                start=start->next;
                end=end->prev;
            }
            else{
                flag=false;
                break;
            }
        }
        return flag;
    }
};

int main(){
    DLL DL1;
    node *head=new node('m');
    node *second=new node('a');
    node *third=new node('d');
    node *fourth=new node('a');
    node *fifth=new node('m');
    head->next=second;
    second->next=third;
    second->prev=head;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=fifth;
    fifth->prev=fourth;
    if(DL1.palindrome(head)) cout<<"Palindrome";
    else cout<<"Not a palindrome";
}