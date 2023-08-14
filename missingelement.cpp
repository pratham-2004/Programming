#include<iostream>
using namespace std;

int arr[]={1,2,3,4,5,6,8};
int size=sizeof(arr)/sizeof(arr[0]);

// int missing_element(int *arr){
//     int l=0;
//     int r=size-1;
//     while(l<=r){
//         int mid=(l+r)/2;
//         if(arr[mid]!=mid+1 && arr[mid-1]==mid){
//             return mid+1;
//         }
//         else if(arr[mid]==mid+1){
//             l=mid+1;
//         }
//         else r=mid-1;
//     }
// }

int mid=0;

int missing_element(int *arr){
    int check=0;
    int l=0;
    int r=size-1;
    while (l<=r){
        int mid=(l+r)/2;
        if(arr[mid]-mid==1){
            l=mid+1;
            check=1;
        }
        else if(arr[mid]-mid>1){
            r=mid-1;
        }
    }
    return mid+1+check;   
}

int main(){
    cout<<missing_element(arr);
}