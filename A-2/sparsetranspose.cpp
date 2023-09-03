#include<iostream>
using namespace std;

void sparsetranspose(int A[][3],int B[][3]){
    int i,j,k,n;
    B[0][0]=A[0][1];
    B[0][1]=A[0][0];
    B[0][2]=A[0][2];
    k=1;
    n=A[0][2];
    for(int i=0;i<A[0][2];i++){
        for(int j=1;j<=n;j++){
            if(i==A[j][1]){
                B[k][0]=i;
                B[k][1]=A[j][0];
                B[k][2]=A[j][2];
                k++;
            }
        }
    }
}

void display(int A[6][3]){
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    int arr[6][3]={{4,4,5},{0,1,10},{0,3,12},{2,2,5},{3,0,15},{3,1,12}};
    int arr2[6][3];
    sparsetranspose(arr,arr2);
    display(arr2);
}


