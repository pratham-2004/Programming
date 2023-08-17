#include<iostream>
using namespace std;

class solution{
public:
    string convert(string s,int rows){
        int arr[1000][1000];
        int c=7;
        for(int i=0;i<c;i++){
            for(int j=0;j<rows;j++){
                if(i==0){
                    cout<<arr[j][i];
                }
                if(rows%2==0){
                    cout<<"T";
                }
            }
        }
    }
};

int main(){}