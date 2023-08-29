#include<iostream>
using namespace std;

int A[]={1,4,3,2,5,8,9};
// int A[]={1,2,3,4,5,6,7,8,9};

int size=sizeof(A)/sizeof(A[0]);

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; i++) {
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

int binarySearch(int arr[],int Element){
    int l=0;
    int r=size-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==Element){
            return m;
            break;
        }
        else if(arr[m]>Element) r=m-1;
        else if(arr[m]<Element) l=m+1; 
    }
    return -1;
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    bubbleSort(A,size);
    display(A,size);
    // int index=binarySearch(A,4);
    // if(index==-1) cout<<"Element not found\n";
    // else cout<<"Element found at index:"<<index;
}