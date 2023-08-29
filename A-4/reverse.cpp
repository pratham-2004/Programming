#include<iostream>
using namespace std;

class stk{
    public:
    string str="DATASTRUCTURES";
    int top;
};

stk s;
int size=(s.str).size();

stk init(){
    s.top=size-1;
    return s;
}

void reverse(){
    for(int i=s.top;i>=0;i--){
        cout<<s.str[i];
    }
}

int main(){
    s=init();
    reverse();
}