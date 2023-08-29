#include<iostream>
using namespace std;

class solution{
    public:
    int gcd(int n1,int n2){
        int i=1;int gcd;
        while(i<=n1 && i<=n2){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
            i++;
        }
        return gcd;
    }

    string gcdofStrings(string str1,string str2){
        int m=str1.size();int n=str2.size();
        if(str1+str2!=str2+str1){
            return "NO";
        }
        else return str1.substr(0,gcd(m,n));
    }
};

int main(){
    solution s1;
    cout<<s1.gcdofStrings("ab","abababab");
}