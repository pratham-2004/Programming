#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector <bool> KidsWithCandies(vector<int>& candies,int extraCandies){
        vector <bool> B;int i=0;int j=0;int max1,max2;
        while(i<candies.size()){
            max2=max1=candies[i]+extraCandies;
            while(j<candies.size()){
                if(max1<=candies[j]){
                    max1=candies[j];
                }
                j++;
            }
            j=0;
            if(max1==max2) B.push_back(1);
            else B.push_back(0);
            i++;
        }
        return B;
    }
};

int main(){
    vector <int> C={2,3,5,1,3};
    vector <bool> D;
    solution s1;
    D=s1.KidsWithCandies(C,3);
    for(int i=0;i<C.size();i++){
        cout<<D[i];
    }
}