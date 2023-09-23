#include<iostream>
using namespace std;    
#define MAXLEN 100

void reverse(string s){
    for(int i=0;i<s.size();i++){
        string word="";
        while(s[i]!=' ' && i<s.size()){
            word+=s[i];
            i++;
        }
        int j=word.size()-1;
        while(j>=0){
            cout<<word[j];
            j--;
        }
        cout<<" ";
    }
}

int main(){
    reverse("Hello World");
}

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