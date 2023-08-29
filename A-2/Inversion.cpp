#include<iostream>
using namespace std;

int arr[]={1,3,5,4};
int size=sizeof(arr)/sizeof(arr[0]);

int inversion(int arr[]){
    int count=0;
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    cout<<"Number of inversions are:"<<inversion(arr);
}

