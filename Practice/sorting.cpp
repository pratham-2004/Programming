#include<iostream>
using namespace std;

void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]) min=j;
        }
        if(min!=i) swap(arr[min],arr[i]);
    }
}

void insertionsort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i;
        while (j>0 && arr[j-1]>temp)
        {
            arr[j]=arr[j-1];
            j=j-1;
        }
    arr[j]=temp;
    }
}

int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l;
    for(int j=l;j<r;j++){
        if (arr[j]<pivot){ 
            swap(arr[i],arr[j]);
            i+=1;
        }
    }
    swap(arr[i],arr[r]);
    return i;
}

int quicksort(int arr[],int l,int r){
    if(l<r){
        int p=partition(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=arr[i+l];
    }
    for(int j=0;j<n2;j++){
        a2[j]=arr[mid+1+j];
    }
    int m=0; int n=0; int o=l;
    while(m<n1 && n<n2){
        if(a1[m]<a2[n]){
            arr[o]=a1[m];
            m++;
            o++;
        }
        else{
            arr[o]=a2[n];
            n++;
            o++;
        }
    }
    while(m<n1){
        arr[o]=a1[m];
        m++;
        o++;
    }
    while(n<n2){
        arr[o]=a2[n];
        n++;
        o++;
    }
}

int mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};
    // void sorting(){

    // }

int main(){
    int arr[]={1,3,7,6,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    // selectionsort(arr,size);
    // insertionsort(arr,size);
    // quicksort(arr,0,size-1);
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}



