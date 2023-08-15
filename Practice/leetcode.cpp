#include<iostream>
using namespace std;

int array[]={1,8,6,2,5,4,8,3,7};
int size1=sizeof(array)/sizeof(array[0]);

class A{
    public:
    int maxarea(int height[],int size){
        int l=0;
        int r=size-1;
        int area=0;
        while(l<r){
            area=max(area,(r-l)*min(height[l],height[r]));
            if (height[l]<height[r]) l+=1;
            else r-=1;
        }
        return area;
    }
};

int main(){
    A answer;
    cout<<answer.maxarea(array,size1);
}