#include<iostream>
using namespace std;

int A[]={1,1,2,2,3,3};
int size=sizeof(A)/sizeof(A[0]);

int duplicate_removal(int arr[],int n){
    
    if(n==0 |n==1){
        return n;
    }

    int j=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    
    arr[j++]=arr[n-1];

    return j;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int newsize=duplicate_removal(A,size);
    display(A,newsize);
}