#include<iostream>
#include<stack>
using namespace std;

int prec(char c){
    if(c=='^') return 3;
    else if(c=='/' || c=='*') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}

void intopost(string s){
    stack<char> s1;    
    stack<char> s2;
    s1.push('(');
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='{') s1.push(s[i]);
        if(s[i]=='+' || s[i]=='/' || s[i]=='-' || s[i]=='*' || s[i]=='^'){
            if(prec[s1[i-1]])
        }
    }
}

int main(){}