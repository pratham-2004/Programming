#include<iostream>
#define MAXLEN 10
using namespace std;

class Q{
    
    int front;
    int rear;
    int q[];
    public:
    
    Q(){
        int q[MAXLEN];
        front=rear=-1;
    }
    
    bool isEmpty(){
        return (front==-1 || front>rear);
    }
    
    bool isFull(){
        return (rear==MAXLEN-1);
    }

    void enqueue(int x){
        if(isFull()) cout<<"Queue is full\n";
        else if(front==rear==-1){
            front=rear=0;
            q[rear]=x; 
        }
        else{
            rear++;
            q[rear]=x;
        }
    }

    void deque(){
        if(isEmpty()) cout<<"queue is  empty\n";
        else if(front==rear==0){
            int x=q[front];
            cout<<"element removed="<<x;
            front=rear=-1;
        }
        else{
            int x=q[front];
            cout<<"element removed="<<x;
            front++;
        }
    }

    int size(){
        return rear-front+1; 
    }

    void display(){
        if(isEmpty()){
            cout<<"Empty queue\n";
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<q[i]<<'\t';
        }
    }

};

int main(){
    Q q;
    q.enqueue(3);
    q.display();
}