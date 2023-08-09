// Using bubbleSort and binarySearch

// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     bool flag;
//     for (i = 0; i < n - 1; i++) {
//         flag = false;
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 flag = true;
//             }
//         }
  
//         if (flag == false)
//             break;
//     }
// }

// int binarySearch(int arr[],int Element,int size){
//     int l=0;
//     int r=size-1;
//     while(l<=r){
//         int m=(l+r)/2;
//         if(arr[m]==Element){
//             return m;
//             break;
//         }
//         else if(arr[m]>Element) r=m-1;
//         else if(arr[m]<Element) l=m+1; 
//     }
//     return -1;
// }

// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int C[100]={};
//     int A[]={1,4,3,2,5,8,9};
//     int B[]={6,3,2,7,5};
//     int sizeA=sizeof(A)/sizeof(A[0]);
//     int sizeB=sizeof(B)/sizeof(B[0]);
//     bubbleSort(B,sizeB);
//     int sizeC=0;
//     for(int i=0;i<sizeA;i++){
//         int index=binarySearch(B,A[i],sizeB);
//         if(index==-1) continue;
//         else{
//             C[sizeC]=B[index];
//             sizeC++;
//         }
//     }
//     display(C,sizeC);
// }


// Sorting both arrays

#include<iostream>
using namespace std;

int A[]={1,4,3,2,5,8,9};
int B[]={6,3,2,7,5};
int C[50];
int sizeA=sizeof(A)/sizeof(A[0]);
int sizeB=sizeof(B)/sizeof(B[0]);
int sizeC=0;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    for (i = 0; i < n -1-i; i++) {
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

void intersection(int arr1[],int arr2[]){
    int i=0,j=0;
    while(i<sizeA && j<sizeB){
        if(arr1[i]==arr2[j]){
            C[sizeC]=arr1[i];
            sizeC++;
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr1[i]) j++;
        
    }
    
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    bubbleSort(A,sizeA);
    display(A,sizeA);
    cout<<endl;
    bubbleSort(B,sizeB);
    display(B,sizeB);
    cout<<endl;

    // display(A,sizeA);
    // display(B,sizeB);
    intersection(A,B);
    // cout<<sizeC<<endl;
    display(C,sizeC);
}