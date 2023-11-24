#include<iostream>
using namespace std;

//BEST CASE 

int main(){
    int Processsize[]={3, 25, 15, 30};
    int Memoryblocks[]={10, 30, 5, 40, 20, 8};
    int flag[]={0,0,0,0,0,0};
    int Ans[]={};
    int p=4;
    int m=6;
    int ind=0;
    int min=-Processsize[0]+Memoryblocks[0];
    for(int i=0;i<p;i++){
        for(int j=0;j<m;j++){
            if(flag[ind]==1) continue;
            int diff=Memoryblocks[j]-Processsize[i];
            if(flag[ind]==0 && diff<min && Memoryblocks[j]-Processsize[i]>0){
                flag[ind]=1;
                min=diff;
            }
        Ans[ind]=i;
        ind++;
        }
    }

for(int k=0;k<p;k++){
    cout<<flag[k]<<" ";
}
}