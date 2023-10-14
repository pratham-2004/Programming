// SJF Preemptive

#include<iostream>
using namespace std;

struct process{
    int pid;
    int bursttime;
    int arrivaltime;
    int waitingtime;
    int turnaroundtime;
    int completiontime;
};

int main(){
    int num,smallest;
    cout<<"Enter the number of processes:\n";
    cin>>num;
    process p[num];
    int time=0;
    int count=0;
    for(int i=0;i<num;i++){
        cout<<"Enter the bursttime of the process:"<<i+1<<"\n";
        cin>>p[i].bursttime;
        cout<<"Enter the arrivaltime of the process:"<<i+1<<"\n";
        cin>>p[i].arrivaltime;
        p[i].pid=i+1;
    }

    for(time=0;count<num;time++){
        int smallest=9;
        for(int i=0;i<num;i++){
            if(p[i].arrivaltime<time && p[i].bursttime<p[smallest].bursttime && p[i].bursttime>0) smallest=i;
        }
        p[smallest].bursttime--;
        if(p[smallest].bursttime==0){
            count++;
            p[smallest].completiontime=time+1;
            p[smallest].turnaroundtime=p[smallest].completiontime-p[smallest].arrivaltime;
            p[smallest].waitingtime=p[smallest].turnaroundtime-p[smallest].bursttime;
            cout<<"Process:"<<p[smallest].pid<<" Completiontime: "<<p[smallest].completiontime<<endl 
                <<"WaitingTime: "<<p[smallest].waitingtime<<endl
                <<"TurnAroundtime: "<<p[smallest].turnaroundtime<<endl;
        }
    }
    return 0;
}