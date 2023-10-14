#include<iostream>
#include<stack>
using namespace std;

int prec(char c){
    if(c=='^') return 3;
    else if(c=='/' || c=='*') return 2;
    else if(c=='+' || c=='-') return 1;
    else return 0;
}

string intopost(string infix){
    int i=0;
    stack<char>s1;   
    string postfix="";
    while(infix[i]!='\0'){
        if(infix[i]=='('){
            s1.push(infix[i]); 
            i++;
        }
        else if(infix[i]>='a' && infix[i]<='z' || infix[i]>='A' && infix[i]<='Z'){
            postfix+=infix[i];
            i++;
        }
        else if(infix[i]==')'){
            while(s1.top()!='('){
                postfix+=s1.top();
                s1.pop();           
            }
            s1.pop();
            i++;
        }
        else{
            while(!s1.empty() && prec(infix[i])<=prec(s1.top())){
                postfix+=s1.top();
                s1.pop();
            }
            s1.push(infix[i]);
            i++;
        }
    }
    // while(!s1.empty()){
    //     postfix+=s1.top();
    //     s1.pop();
    // }
    return postfix;
}

int main(){
    string infix="((a+(b*c))-d)";
    cout<<intopost(infix);
}