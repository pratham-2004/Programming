#include<iostream>
using namespace std;

//method-1 

// bool perfectsquare(int n){
//     int i=0;
//     if(n==0) return false;
//     else{
//         for(i;i<n;i++){
//             if(i*i==n){
//                 return true;
//             }
//             else i++;
//         }
//         if(i==n){
//             return false;
//         }
//     }
// }

//method-2

bool perfectsquare(int n){
    int l=1;
    int r=n;
    while(l<=r){
        int m=(l+r)/2;
        if(n==1){
            return true;
        }
        else if(m*m==n){
            return true;
        }
        else if(m*m>n){
            r=m-1;
        }
        else if(m*m<n){
            l=m+1;
        }
    }
    if(l*l==n || r*r==n){
        return true;
    }
    return false;
}

int main(){
    if(perfectsquare(100)) cout<<"Perfect Square";
    else cout<<"Not a Perfect Square";
}
