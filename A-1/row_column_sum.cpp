#include<iostream>
using namespace std;

int R1,C1;
int matrix[100][100];

void create(int M[100][100],int *row_size,int *column_size){
    cout<<"Enter the number of rows\n";
    cin>>*row_size;
    cout<<"Enter the number of columns\n";
    cin>>*column_size;
    for(int i=0;i<*row_size;i++){
        for(int j=0;j<*column_size;j++){
            cout<<"Enter element corresponding to position=>["<<i<<"]"<<"["<<j<<"]:";
            cin>>M[i][j];
        }
    }
}

void sum(int M[100][100]){
    for(int i=0;i<R1;i++){
        int r_sum=0; 
        for(int j=0;j<C1;j++){
            r_sum+=M[i][j];
        }
        cout<<"Sum of elements of ROW-"<<i+1<<":"<<r_sum<<endl;
    }
    for(int j=0;j<C1;j++){
        int c_sum=0; 
        for(int i=0;i<R1;i++){
            c_sum+=M[i][j];
        }
        cout<<"Sum of elements of Column-"<<j+1<<":"<<c_sum<<endl;
    }
}

int main(){
    create(matrix,&R1,&C1);
    sum(matrix);
}