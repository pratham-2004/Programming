#include<iostream>
using namespace std;
#include<vector>
// using namespace std;
// class solution{
// 	public:
// 		string longestString(string s)

class solution{
	public:
	int longestsubstr(string s){
		vector <int> dict(256,-1);
		int maxlength=0,start=-1;
		for(int i=0;i<s.size();i++){
			if(dict[s[i]]>start){
				cout<<dict[s[i]]<<endl;
				start=dict[s[i]];
			}
			dict[s[i]]=i;
			maxlength=max(maxlength,i-start);
			}
		return maxlength;	
	}
};

int main(){
	solution s;
	cout<<"longestLength="<<s.longestsubstr("pwwkew");
}