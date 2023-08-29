#include<iostream>
using namespace std;

int array[100];
int size;

void create(){
    cout<<"Enter the size of the array you want to create\n";
    cin>>size;
    if(size!=0){
        for(int i=0;i<size;i++){
            cout<<"Enter element"<<i+1<<":\n";
            cin>>array[i];
            // cout<<i<<"\n";
        }
    }
    else cout<<"Enter size greater than 0\n";
}

void reverse(int arr[],int size){
    // cout<<size<<endl;
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<'\n';
}

int main(){
    create();
    // cout<<size<<endl;
    reverse(array,size);
    display(array,size);
}