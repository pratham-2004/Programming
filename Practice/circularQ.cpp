#include<iostream>
using namespace std;
#define MAXLEN 5

class CirQ{
    int items[MAXLEN],front,rear;
    public:
    CirQ(){
        front=-1;rear=-1;
    }
    bool isFull(){
        if(front==0 && rear==MAXLEN-1) return true;
        if(front==rear+1) return true;
        else return false;
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else return false;
    }

    void enqueue(int element){
        if(isFull()){
            cout<<"OVERFLOW\n";
        }
        else{
            if(front==-1) front=0;
            rear=(rear+1)%MAXLEN;
            items[rear]=element;
            cout<<"Item inserted "<<element<<"at index "<<rear<<endl;
        }
    }

    int dequeue(){
        int element;
        if(isEmpty()) {
        cout<<"UNDERFLOW\n";
        element=items[front];
        }
        else{
            if(front==rear){
                rear=-1;front=-1;
            }
            else front=(front+1)%MAXLEN;
        }
        return element;
    }

    void display(){
        int i;
        if(isEmpty()){
            cout<<"UNDERFLOW\n";
        }
        else{
            for(i=front;i!=rear;i=(i+1)%MAXLEN){
                cout<<items[i]<<"\t";
            }
            cout<<items[i]<<"\t";
        }
    }
};

int main(){
    CirQ q;
    q.display();
    q.enqueue(6);
    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(8);
    q.enqueue(7);
    q.display();
    q.dequeue();
    q.display();
}