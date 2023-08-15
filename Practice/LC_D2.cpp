#include<iostream>
using namespace std;

class solution{
    public:
    string longestPalindrome(string s){
        int maxlength=0;string longestP;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
            string CurrentP;
            int m=0;
                for(int k=0;k<j-i+1;k++){
                    if(s[i+k]==s[j-k]){
                        CurrentP+=s[i+k];
                        // cout<<m;
                    }
                    else break;
                }
                if(CurrentP.size()>maxlength){
                    maxlength=CurrentP.size();
                    longestP=CurrentP;
                }
            }
        }
    return longestP;
    }
};

int main(){
    solution S1;
    cout<<S1.longestPalindrome("a");
}aacabdkaca