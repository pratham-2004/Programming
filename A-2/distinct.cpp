#include<iostream>
using namespace std;

int arr[]={1,3,7,4,7};
int count=0;
int size2=sizeof(arr)/sizeof(arr[0]);
bool flag;

int distinct(int arr[]){
    for(int i=0;i<size2;i++){
        for(int j=i+1;j<size2;j++){
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
            else flag=true;
        }
        if(flag==true) count++;
    }
    return count; //The last element of the loop will always be added to count
}

int main(){
    cout<<distinct(arr);    
}



