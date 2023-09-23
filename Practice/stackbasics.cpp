#include<iostream>
using namespace std;
#define MAXLEN 100

typedef struct{
    int element[MAXLEN];
    int top;
}stack;

stack init(){
    stack s;
    s.top=-1;
    return s;
}

bool isFull(stack s){
   return s.top==MAXLEN-1;
}

bool isEmpty(stack s){
   return s.top==-1;
}

void top(stack s){
    if(isEmpty(s)){
        cout<<"Empty stack\n";
    }
    else cout<<s.element[s.top];

}

stack push(stack s,int value){
    if(!isFull(s)){
        s.top++;
        s.element[s.top]=value;
    }
    else cout<<"OVERFLOW";
    return s;
}

stack pop(stack s){
    if(isEmpty(s)) cout<<"UNDERFLOW";
    else {
        cout<<"Element popped out is:"<<s.element[s.top];
        s.top--;
    }
    return s;
}

void display(stack s){
    for(int i=s.top;i>=0;i--){
        cout<<s.element[i]<<"\t";
    }
}

int main(){
    stack s;
    s=init();
    cout<<isEmpty(s);
    // s=push(s,10);
    // top(s);
    // s=push(s,20);
    // top(s);
    // s=push(s,30);
    // top(s);
    // s=pop(s);
    // display(s);
    // cout<<isFull(s);
}