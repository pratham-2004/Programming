#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    bool canPlaceFlowers(vector<int> & flowered,int n){
        int count=0;
        for(int i=0;i<flowered.size();i++){
            if(flowered[i]==0){
                int p=(i==0 || flowered[i-1]==0)?0:1;
                int n=(i==flowered.size()-1 || flowered[i+1]==0)?0:1;
                if(p==0 && n==0){
                    flowered[i]=1;
                    count++;
                }
            }
            if(count>=n) return true;
        }
        return false;
    }
};
int main(){
    vector<int> flowers={1,0,0,0,1};
    solution s1;
    cout<<s1.canPlaceFlowers(flowers,2);
} 
