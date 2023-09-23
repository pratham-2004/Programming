#include<iostream>
using namespace std;
#define MAXLEN 10

typedef struct{
    int element[MAXLEN];
    int top1;
    int top2;
}stack;

stack init(){
    stack s;
    s.top1=-1;
    s.top2=MAXLEN;
    return s;
}

bool isFullS1(stack s){
   return s.top1==MAXLEN/2-1;
}

bool isFullS2(stack s){
   return s.top2==MAXLEN/2;
}

bool isEmpty1(stack s){
   return s.top1==-1;
}

bool isEmpty2(stack s){
   return s.top2==MAXLEN;
}

void top1(stack s){
    if(isEmpty1(s)){
        cout<<"stack1 Empty\n";
    }
    else cout<<s.element[s.top1];

}

stack push(stack s,int value,string S){
    if(S=="S1"){
        if(!isFullS1(s)){
            s.top1++;
            s.element[s.top1]=value;
        }
        else cout<<"OVERFLOW IN STACK1\n";
        return s;
    }
    else{
        if(!isFullS2(s)){
            s.top2--;
            s.element[s.top2]=value;
        }
        else cout<<"OVERFLOW IN STACK2\n";
        return s;
    }
}

stack pop(stack s,string S){
    if(S=="S1"){
        if(isEmpty1(s)) cout<<"UNDERFLOW IN STACK1\n";
        else {
            cout<<"Element popped out from stack1 is :"<<s.element[s.top1];
            s.top1--;
        }
        return s;
    }
    else{
        if(isEmpty2(s)) cout<<"UNDERFLOW IN STACK2\n";
        else {
            cout<<"Element popped out from stack2 is :"<<s.element[s.top2];
            s.top2++;
        }
        return s;   
    }
}

void display(stack s,string S){
    if(S=="S1"){
        for(int i=s.top1;i>=0;i--){
            cout<<s.element[i]<<"\t";
        }
    }
    else{
        for(int i=s.top2;i<=MAXLEN-1;i++){
            cout<<s.element[i]<<"\t";
        }
    }
}

int main(){
    stack s;
    s=init();
    s=pop(s,"S1");
    s=push(s,10,"S1");
    s=push(s,20,"S1");
    s=push(s,30,"S1");
    s=push(s,40,"S1");
    s=push(s,50,"S1");
    s=push(s,60,"S1");
    display(s,"S1");
    s=push(s,10,"S2");
    s=push(s,20,"S2");
    s=push(s,30,"S2");
    s=push(s,40,"S2");
    s=push(s,50,"S2");
    s=push(s,60,"S2");
    display(s,"S2");
}