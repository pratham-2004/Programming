
#include<iostream>
#include<string.h>
using namespace std;

class solution{
public:
    string convert(string s,int rows){
        string s3="";
        string arr[rows][s.size()];
        int i=0;
        int j=0,m=0;
        while(m<s.size()){
            if(i==0 ){
                while(i<rows){
                    arr[i][j]=s[m];
                    m++;
                    i++;
                    if(m>=s.size())
                    break;
                    // cout<<m<<'\n';
                }
                i--;
            }
            if(i==rows-1){
                while(i>1){
                    j++;
                    i--;
                    arr[i][j]=s[m];
                    m++;
					if(m>=s.size())
                    break;
                }
                i=0;
                j=j+1;
            }
        }
        for(int i=0;i<rows;i++){
            for(int n=0;n<j+1;n++){
                 if(arr[i][n]!="") s3+=arr[i][n];
            }
        }
         return s3;
    }
};

int main(){
    solution s1;
    cout<<s1.convert("PAYPALISHIRING",4);
}



