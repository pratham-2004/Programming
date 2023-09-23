#include<iostream>
#include<stack>
using namespace std;

    string reverseWords(string s){
        stack<string> stk;
        int i=0;
        string s2;
        for(i=0;i<s.size();i++){
            string word="";
            while(s[i]!=' ' && i<s.size()){
                word+=s[i];
                i++;
            }    
            if(word!="") stk.push(word);
        }
        int n=stk.size();
        int j=1;
        while(!stk.empty()){ 
            s2+=stk.top();
            if(j<n) s2+=" ";
            j++;
            stk.pop();
        }
        return s2;
        }

int main(){
    cout<<reverseWords("My name is Akshit");
}

