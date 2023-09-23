#include<iostream>
using namespace std;

void Wt(int bt[]){
    int wt[4]={};
    wt[0]=0;
    float awt=0;
    int size=sizeof(wt)/sizeof(wt[0]);
    cout<<wt[0]<<"\t";
    for(int i=1;i<size;i++){
        wt[i]=wt[i-1]+bt[i-1];
        awt+=wt[i];
        cout<<wt[i]<<"\t";
    }
    cout<<"Average Waiting Time="<<awt/4;
    cout<<"\n";
    int tat[4]={};
    int size2=sizeof(tat)/sizeof(tat[0]);
    float atat=0;
    for(int i=0;i<size2;i++){
        tat[i]=wt[i]+bt[i];
        atat+=tat[i];
        cout<<tat[i]<<"\t";
    }
    cout<<"Average Turn Around Time="<<atat/4;
}
int main(){
    int at[4]={0,0,0,0};
    int bt[4]={5,10,15,6};
    Wt(bt);
}