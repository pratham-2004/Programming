#include<iostream>
using namespace std;

int matrix_1[100][100];
int matrix_2[100][100];
int matrix_3[100][100];
int R1,C1,R2,C2;

void create(int M[100][100],int *row_size,int *column_size){
    cout<<"Enter the number of rows\n";
    cin>>*row_size;
    cout<<"Enter the number of columns\n";
    cin>>*column_size;
    for(int i=0;i<*row_size;i++){
        for(int j=0;j<*column_size;j++){
            cout<<"Enter element corresponding to posiion=>["<<i<<"]"<<"["<<j<<"]:";
            cin>>M[i][j];
        }
    }
}

void multiply(int M1[100][100],int M2[100][100],int M3[100][100]){
    // for(int i=0;i<R1;i++){
    //     for(int j=0;j<C2;j++){
    //         M3[i][j]=0;
    //     }
    // }
    if(C1==R2){
        cout<<"matrix_1 * matrix_2:\n";
        for(int i=0;i<R1;i++){
            for(int j=0;j<C2;j++){
                for(int k=0;k<C1;k++){
                    M3[i][j]+=M1[i][k]*M2[k][j];
                }
                cout<<M3[i][j]<<'\t';
            }
            cout<<"\n";
        }
    }
    else cout<<"Multiplication not possible\n";
}

int main(){
    create(matrix_1,&R1,&C1);
    create(matrix_2,&R2,&C2);
    multiply(matrix_1,matrix_2,matrix_3);
}
