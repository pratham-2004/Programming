#include<iostream>
using namespace std;

class solution{
public:
string mergeAlternately(string s1,string s2){
    int small=min(s1.size(),s2.size());
    int large=max(s1.size(),s2.size());
    int i =0,j=0,m=0;
    string s3="";
    if(small!=large){
        while(i<small || j<small){
            if(m%2==0){
                // cout<<i<<"\t"<<j<<endl;
                s3+=s1[i];
                i++;
                m++;
            }
            else{
                s3+=s2[j];
                j++;
                m++;
            }
        }
        if(s1.size()>s2.size()){
            while(j<large){
                s3+=s1[j];
                j++;
            }
        }
        else{
            while(j<large){
                s3+=s2[j];
                j++;
            }
        }
        return s3;
    }
    else{
        while(i<small || j<small){
            if(m%2==0){
                s3+=s1[i];
                i++;
                m++;
            }
            else{
                s3+=s2[j];
                j++;
                m++;
            }
        }
        return s3;
        }
    }
};
int main(){
    solution s;
    cout<<s.mergeAlternately("ab","pq");
}