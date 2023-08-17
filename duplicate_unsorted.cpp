#include<iostream>
using namespace std;

int arr[]={1,3,4,6,3,10,7,8,6,7};
int size=sizeof(arr)/sizeof(int);

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    for (i = 0; i < n - 1-i; i++) {
        flag = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
  
        if (flag == false)
            break;
    }
}
int duplicate_removal(int arr[],int n){
    bubbleSort(arr,n);    
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
    bubbleSort(arr,size);
    int newsize=duplicate_removal(arr,size);
    display(arr,newsize);
}