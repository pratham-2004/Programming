#include<iostream>
using namespace std;

int R,C;
int arr[100];

void input(){
    int i=0;
    cout<<"Enter the number of rows\n";
    cin>>R;
    cout<<"Enter the number of columns\n";
    cin>>C;
    int count=C+2*(C-1);
    while(count>0){
        cout<<"Enter the elements of a tridiagonal matrix\n";
        cin>>arr[i];
        i++;
        count--;
    }
}

void tridiagonalMatrix(){
    int m=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(i-j==1){
                cout<<arr[m]<<'\t';
                m++;
            }
            else if(i==j){
                cout<<arr[m]<<"\t";
                m++;
            }
            else if(j-i==1){
                cout<<arr[m]<<'\t';
                m++;
            }
            else cout<<'0'<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    input();
    tridiagonalMatrix();
}