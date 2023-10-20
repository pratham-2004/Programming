#include<iostream>
using namespace std;

//**Doubly Circular Linked List**

// class node{
//     public:
//     int data;
//     node *next;
//     node *prev;
//     node(int x){
//         data=x;
//         next=NULL;
//         prev=NULL;
//     }
// };

// class CircularDoublyLL{
//     public:
    
//     void insert_beg(node *&head,int v){
//             node *newnode=new node(v);
//             if(head){
//                 newnode->next=head;
//                 head->prev=newnode;
//                 head=newnode;
//             }
//             else{
//                 head=newnode;
//             }
//         }


//     void display(node *head){
//         node *temp=head;
//         while(temp!=NULL){
//             cout<<temp->data;
//             if(temp->next!=NULL)cout<<"->";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }

//     bool isEvenParity(int x){
//         int parity=0;
//         while(x!=0){
//             if(x & 1) parity++;
//             x=x>>1;
//         }
//         if(parity%2==0) return true;
//         return false;
//     }

// void deleteEvenParityNode(node *&head) {
//     node *temp = head;
//     while (temp != NULL) {
//         if (isEvenParity(temp->data)) {
//             node *toDelete = temp;
//             if (temp->next == temp) {
//                 head = NULL; 
//             } 
//             else {
//                 if (temp == head) {
//                     head = temp->next; 
//                 }
//                 else{
//                     temp->prev->next = temp->next;
//                     temp->next->prev = temp->prev;
//                 }
//             }
//             temp = toDelete->next; 
//             free(toDelete); 
//         } 
//         else {
//             temp = temp->next; 
//         }
//     }
// }

// };

// int main(){
//     CircularDoublyLL C1;
//     node *head=NULL;
//     C1.insert_beg(head,11);
//     C1.insert_beg(head,9);
//     C1.insert_beg(head,34);
//     C1.insert_beg(head,6);
//     C1.insert_beg(head,13);
//     C1.insert_beg(head,21);
//     C1.display(head);
//     C1.deleteEvenParityNode(head);
//     C1.display(head);
// }

//**Circular Linked List**

class node {
public:
    int data;
    node* next;
    node(int x) {
        data = x;
        next = nullptr;
    }
};

class CLL {
public:
    void insert_beg(node*& head, int x) {
        node* nN = new node(x);
        if (head == nullptr) {
            nN->next = nN;
            head = nN;
        }
        else {
            node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            nN->next = head;
            temp->next = nN;
            head = nN;
        }
    }

    void display(node* head) {
        if (head == nullptr) {
            cout << "Empty list" << endl;
            return;
        }
        else {
            node* temp = head;
            while(temp->next!=head){
                cout<<temp->data;
                temp=temp->next;
            }
            cout<<temp->data;
        }
        cout<<endl;
    }

    bool isEvenparity(int x){
        int parity=0;
        while(x!=0){
            if(x & 1) parity++;
            x=x>>1;
        }
        if(parity%2==0) return true;
        else return false;
    }

    void deleterEvenparity(node *&head){
        node *temp=head;
        node *prev;
        while(temp->next!=head){
            prev=temp;
            if(isEvenparity(temp->data)){
                node *todelete=temp;
                if(temp==head) {
                    node *temp2=head;
                    while(temp2->next!=head){
                        temp2=temp2->next;
                    }
                    head=head->next;
                    temp2->next=head;
                }
                else{
                    prev->next=temp->next;
                }
            }
        }
        if(isEvenparity(temp->data)) prev->next=head; 
    }
};

int main(){
    CLL C1;
    node *head=NULL;
    C1.insert_beg(head,1);
    C1.insert_beg(head,2);
    C1.insert_beg(head,3);
    C1.display(head);
    // cout<<C1.isEvenparity(3);
    C1.deleterEvenparity(head);
    C1.display(head);
}