#include<iostream>
using namespace std;
#include<vector>

int main(){
    string t="cat";
    vector <int> vect(10,-1);
    for(int i=0;i<t.size();i++){
        cout<<vect[t[i]]<<endl;
    }
}