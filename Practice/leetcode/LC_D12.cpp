#include<iostream>
using namespace std;

class solution{
    public:
    bool isVowel(char c){
            return (c=='a' || c=='A' || c=='i' || c=='I' || c=='e' || c=='E' || c=='o' || c=='O' || c=='u' || c=='U' );
    }

    string reverseVowels(string s){
        string vowel="";
        long j=0;

        for(int i=0;i<s[i]!='\0';i++){
            if(isVowel(s[i])) vowel[j++]=s[i];
        }

        for(int i=0;i<s[i]!='\0';i++){
            if(isVowel(s[i])) s[i]=vowel[--j];
        }

        return s;
    }
};
int main(){
    solution s1;
    cout<<s1.reverseVowels("Red Roses run no risk, sir, on nurses order.");
}