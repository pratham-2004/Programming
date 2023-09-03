#include<iostream>
using namespace std;

class solution{
    public:
    bool isVowel(char c){
            return (c=='a' || c=='A' || c=='i' || c=='I' || c=='e' || c=='E' || c=='o' || c=='O' || c=='u' || c=='U' );
    }

    string reverseVowels(string s){
        int i=0;int j=s.size();
            while(i<j){
                if(isVowel(s[i]) && isVowel(s[j])){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else if(!isVowel(s[i])) i++;
                else if(!isVowel(s[j])) j--;
            }
            return s;
        }
};
int main(){
    solution s1;
    cout<<s1.reverseVowels("hello");
}