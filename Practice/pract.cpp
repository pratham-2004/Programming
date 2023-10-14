
#include<iostream>
#include<stack>
#include<string>
#define MAXLEN 10
using namespace std;
//  class node{
//     public:
//     int data;
//     node *next;
//     node(int x){
//         data=x;
//         next=NULL:
//     }
//  };

//  class LinkedList{
//     public;
//     void del_
//  };

// int main(){
    
// }

// #include<iostream>
// using namespace std;    
// #define MAXLEN 100

// void reverse(string s){
//     for(int i=0;i<s.size();i++){
//         string word="";
//         while(s[i]!=' ' && i<s.size()){
//             word+=s[i];
//             i++;
//         }
//         int j=word.size()-1;
//         while(j>=0){
//             cout<<word[j];
//             j--;
//         }
//         cout<<" ";
//     }
// }

// int main(){
//     reverse("Hello World");
// }

// int printfun(int x){
//     if(x<1){
//         return x;
//     }
//     else{
//         cout<<x<<" ";
//         printfun(x-1);
//         cout<<x<<" ";
//     }

// int main(){
//     printfun(3);
// }

// int binarysearch(int arr[],int l,int r,int x){
//     if(l<=r){
//         int m=(l+r)/2;
//         if(arr[m]==x) return m;
//         if(arr[m]>x) return binarysearch(arr,l,m-1,x);
//         return binarysearch(arr,m+1,r,x);
//     }
//     return -1;
// }

//  int main(){
//     int arr[]={1,2,5,6,7,8};
//     int x=10;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int result=binarysearch(arr,0,size-1,8);
//     if(result==-1){
//         cout<<"Element not found\n";
//     }
//     else cout<<"Element found at index:"<<result;
// }

// int gcd(int dividend,int divisor){
//     if(dividend%divisor==0) return divisor;
//     else return gcd(divisor,dividend%divisor);
// }

// int main(){
//     int result;
//     result=gcd(10,5);
//     cout<<"gcd="<<result;
// }

// int fibo(int n){
//     if(n==1) return 0;
//     else if(n==2) return 1;
//     else if(n>2){
//         return fibo(n-2)+fibo(n-1);
//     }
// }

// int main(){
//     cout<<fibo(5);
// }

// int palindrome(string s,int l,int r){
//     if(l<=r){
//         if(l==r && s[l]==s[r]) return 1;
//         if(s[l]==s[r]) return palindrome(s,l+1,r-1);
//         return 0;
        
//     }
//     return -1; 
// }

// int main(){
//     string str="m";
//     int result=palindrome(str,0,str.size()-1);
//     if(result) cout<<"A palindrome";
//     else cout<<"Not a palindrome";
// }

// typedef struct{
//     int element[MAXLEN];
//     int top;
// }stack;

// stack init(){
//     stack s;
//     s.top=-1;
//     return s;
// }

// bool isFull(stack s){
//     return s.top==MAXLEN-1;
// }

// bool isEmpty(stack s){
//     return s.top==-1;
// }

// int top(stack s){
//     if(!isEmpty(s)) return s.element[s.top];
//     else cout<<"UNDERFLOW\n"; 
// }

// stack push(stack s,int e){
//     if(!isFull(s)){
//         s.top++;
//         s.element[s.top]=e;
//     }
//     else cout<<"OVERFLOW\n";
//     return s;
// }

// stack pop(stack s){
//     if(!isEmpty(s)) s.top--;
//     else cout<<"UNDERFLOW\n";
//     return s;
// }

// void display(stack s){
//     for(int i=s.top;i>=0;i--){
//         cout<<s.element[i]<<" ";
//     }
// }

// int main(){
//     stack s;
//     s=init();
//     s=pop(s);
//     s=push(s,1);
//     cout<<top(s)<<"\n";
//     cout<<isFull(s)<<"\n";
//     cout<<isEmpty(s)<<"\n";
//     s=push(s,2);
//     s=push(s,3);
//     display(s);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void deleteMid(stack<int> &st ,int N){
//     int popped_elements = N-st.size();
//     if(popped_elements == (N/2)){
//         st.pop();
//         return;
//     }
//     int x=st.top();
//     st.pop();
//     deleteMid(st,N);
//     st.push(x);
// }

// void deleteMidElement(stack<int>& st)
// {
//     int N = st.size();
//     deleteMid(st,N);
    
// }

// int main()
// {
//     stack<int> st;
//     st.push(6);
//     st.push(5);
//     st.push(4);
//     st.push(3);
//     st.push(2);
//     st.push(1);
    

//     deleteMidElement(st);
    
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
    
//     return 0;
// }

// Infix to postfix

// int prec(char c){
//     if(c=='^') return 3;
//     else if(c=='*' || c=='/') return 2;
//     else if(c=='+' || c=='-') return 1;
//     else return 0;
// }

// string intopost(string infix){
//     string postfix="";
//     stack<char> s;
//     int i=0;
//     while(infix[i]!='\0'){
//         if(infix[i]=='('){
//             s.push(infix[i]);
//             i++;
//         }
//         else if(infix[i]>='a' && infix[i]<='z' || infix[i]>='A' && infix[i]<='Z'){
//             postfix+=infix[i];
//             i++;
//         }
//         else if(infix[i]==')'){
//             while(s.top()!='('){
//                 postfix+=s.top();
//                 s.pop();
//             }
//             s.pop();
//             i++;
//         }
//         else{
//             while(!s.empty() && prec(infix[i]<=s.top())){
//                 postfix+=s.top();
//                 s.pop();
//             }
//             s.push(infix[i]);
//             i++;
//         }
//     }
//     return postfix;
// }

// int main(){
//     cout<<intopost("(a+(b*c))-d");
// }

//prefix to Infix

// int presedence(char c){
//     if(c == '^')
//         return 3;
//     else if(c == '*' || c == '/')
//         return 2;
//     else
//         return 1;
// }

// bool isOperator(char c){
//     if(c == '*' || c == '+' || c == '/' || c == '-' || c == '^'){
//         return true;
//     }
//     else 
//         return false;
// }

// void convert(string s){
//     stack<char>ans;
//     string result;
//     int n = s.length();

//     for(int i=0;i<n;i++){
//         char c = s[i];
        
//         if(isOperator(c)){
//             ans.push(c);
//         }
        
//         else if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c <='9')){
//             result += c;
//             if(!ans.empty()){
//                 result += ans.top();
//                 ans.pop();
//             }
//         }
//     }
//     cout<<result<<endl;
// }

// int main(){
//     string str = "*-A/BC-/AKL";
//     convert(str);
// }

// Infix to prefix

// int value(char c){
//     if(c == '^')
//         return 3;
//     else if(c == '*' || c == '/')
//         return 2;
//     else if(c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }

// void convert( string s){
//     stack<char>st;
//     string result;

//     int n = s.length();

//     for(int i=n-1;i>=0;i--){
//         char ans = s[i];
        
//         if((ans >= '0' && ans<='9') || (ans >= 'A' && ans <= 'Z') || (ans >= 'a' && ans <='z')){
//             result += ans;
//         }

//         else if(ans == ')'){
//             st.push(ans);
//         }
//         else if(ans == '('){
//             while(st.top() != ')'){
//                 result += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }

//         else{
//             while(!st.empty() && value(ans) <= value(st.top()) ){
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(ans);
//         }
//     }
//     while(!st.empty()){
//         result += st.top();
//         st.pop();
//     }
//     stack<char>correct;
//     int m = result.length();
//     for(int j=0;j<m;j++){
//         correct.push(result[j]);
//     }
//     for(int j=0; j<m ;j++){
//         cout<<correct.top();
//         correct.pop();
//     }
// }

// int main(){
//     string str = "(A-B/C)*(A/K-L)";
//     convert(str);
// }

class CirQ{
    int items[MAXLEN];
    int front;
    int rear;
    public:

    CirQ(){
        front=rear=-1;
    }

    bool isEmpty(){
        if(front==-1) return true;
        return false;
    }

    bool isFull(){
        if(front==0 && rear==MAXLEN-1) return true;
        if(front==rear+1) return true;
        return false;
    }

    void enqueue(int x){
        if(isFull()) cout<<"Full\n";
        else{
            if(front==-1) front=0;
            rear=(rear+1)%MAXLEN;
            items[rear]=x;
        }
    }

    int deque(){
        if(isEmpty()) cout<<"Empty";
        else{
            int x=items[front];
            if(front==rear){
                front=rear=-1;
            }
            else{
                front=(front+1)%MAXLEN;
            return x;
            }
        }
    }

    void display(){
        if(!isEmpty()){
            for(int i=front;i!=rear;i=(i+1)%MAXLEN){
                cout<<items[i]<<"\t";
            }
            cout<<items[rear]<<"\n";
        }
        else cout<<"Empty\n";
    }
};

int main(){
    CirQ q;
    q.display();
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    q.deque();
    q.display();
}