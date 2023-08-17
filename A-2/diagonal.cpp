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
    int count=C;
    while(count>0){
        cout<<"Enter the elements of a diagonal matrix\n";
        cin>>arr[i];
        i++;
        count--;
    }
}

void diagonalMatrix(){
    int m=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(i==j){
                cout<<arr[m]<<"\t";
                m++;
            }
            else cout<<'0'<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    input();
    diagonalMatrix();
}