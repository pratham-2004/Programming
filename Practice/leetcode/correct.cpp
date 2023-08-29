#include<iostream>
#include<string.h>
using namespace std;

class solution{
public:
    void convert(string s,int rows){
        string arr[rows][s.size()];
        int i=0;
        int j=0,m=0;
        while(m<s.size()){
            if(i==0 ){
                while(i<rows){
                    arr[i][j]=s[m];
                    m++;
                    i++;
                    // cout<<m<<'\n';
                }
                i--;
            }
            if(i==rows-1){
                while(i>1){
                    j++;
                    i--;
                    arr[i][j]=s[m];
                    cout<<i<<" "<<j<<"="<<arr[i][j]<<endl;
                    m++;
                }
                i=0;
                j=j+1;
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<s.size();j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};

int main(){
    solution s1;
    s1.convert("PAYPALISHIRING",4);
}