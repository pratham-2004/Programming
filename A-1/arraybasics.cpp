#include<iostream>
using namespace std;

int array[100];
int size;

void create(){
    cout<<"Enter the size of the array you want to create\n";
    cin>>size;
    if(size!=0){
        for(int i=0;i<size;i++){
            cout<<"Enter element"<<i+1<<":\n";
            cin>>array[i];
            // cout<<i<<"\n";
        }
    }
    else cout<<"Enter size greater than 0\n";
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<'\n';
}

void insert(int arr[],int element,int position,int *size){ //we can use int*b also
    for(int j=*size-1;j>=position-1;j--){
        arr[j+1]=arr[j];
    }
    arr[position-1]=element;
    *size=*size+1;
}

void del(int arr[],int position,int *size){
    for(int m=position-1;m<*size-1;m++){
        arr[m]=arr[m+1];
    }
    *size=*size-1;

}

int search(int arr[],int element){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==element){
            cout<<"element found at index="<<i<<endl;
            break;
        }
    }
    if(i==size){
        cout<<"Element not found";
    }
}

int main(){
    // cout<<size;
    int operation_number=0;
    while(true){
        cout<<"Enter the operation number that you want to perform[Create(1),Display(2),Insert(3),Delete(4),LinearSearch(5),Exit(6)]\n";
        cin>>operation_number;
        if(operation_number==1){
            create();
        }
        else if(operation_number==2){
            display(array,size);
        }
        else if(operation_number==3){
            int element,position;
            cout<<"Enter the element you want to insert\n";
            cin>>element;
            cout<<"Enter the position at which you want to insert\n";
            cin>>position;
            insert(array,element,position,&size);
        }
        else if(operation_number==4){
            int position;
            cout<<"Enter the postion at which you which you want to delete element\n";
            cin>>position;
            del(array,position,&size);
        }
        else if(operation_number==5){
            int element;
            cout<<"Enter the element you want to search\n";
            cin>>element;
            search(array,element);
        }
        else if(operation_number==6){
            exit(0);        
        }
        else cout<<"Error\n";
    }
}


