#include<iostream>
using namespace std;

int l=0;

void sparseAdd(int arr1[][3],int arr2[][3],int added[][3]){
    for(int i=0;i<arr1[0][2];i++){
        for(int j=0;j<arr1[0][2];j++){
            if(arr1[i][0]==arr2[i][0] && arr1[i][1]==arr2[i][1]){
                added[i][0]=arr1[i][0];
                added[i][1]=arr1[i][1];
                added[i][2]=arr1[i][2]+arr2[i][2];
                l++;
            }
            else{
                added[i][0]=arr1[i][0];
                added[i][1]=arr1[i][1];
                added[i][2]=arr1[i][2];
                l++;
                added[i+1][0]=arr2[i][0];
                added[i+1][1]=arr2[i][1];
                added[i+1][2]=arr2[i+1][2];
                l++;
            }
        }
    }
}

void display(int A[l][3]){
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    int sparse1[6][3]={{6,6,4},{0,0,15},{0,3,22},{0,5,-15},{1,1,11},{1,2,3}};
    int sparse2[6][3]={{6,6,4},{0,0,15},{1,4,91},{1,1,11},{2,1,3},{2,5,28}};
    int Addedsparse[][3]={};
    }