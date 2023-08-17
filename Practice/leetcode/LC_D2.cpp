// #include<iostream>
// using namespace std;

// class solution{
//     public:
//     string longestPalindrome(string s){
//         int maxlength=0;string longestP;
//         int n=s.size();
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//             string CurrentP;
//             int m=0;
//                 for(int k=0;k<j-i+1;k++){
//                     if(s[i+k]==s[j-k]){
//                         CurrentP+=s[i+k];
//                         // cout<<m;
//                     }
//                     else
//                     {
//                     	CurrentP="";
//                     	break;
// 					}
//                 }
//                 if(CurrentP.size()>maxlength){
//                     maxlength=CurrentP.size();
//                     longestP=CurrentP;
//                 }
//             }
//         }
//     return longestP;
//     }
// };

// int main(){
//     solution S1;
//     cout<<S1.longestPalindrome("aacabdkacaa");
// }

#include<iostream>
#include<string>
using namespace std;
class solution{
	public:
		string longest_palindrome(string s)
		{
			int max_len=1;
			int n=s.length(),st=0,end=0;
			if(n<2)
			return s;
			//odd length
			for(int i=0;i<n;i++)
			{
				int l=i,r=i;
				while(l>=0 && r<n)
				{
					if(s[l]==s[r])
					{
						l--;
						r++;
					}
					else
					break;
				}
				int len=r-l-1;
				if(len>max_len)
				{
					max_len = len;
					st=l+1;
					end=r-1;
				}
			}
			//Even length
			for(int i=0;i<n;i++)
			{
				int l=i,r=i+1;
				while(l>=0 && r<n)
				{
					if(s[l]==s[r])
					{
						l--;
						r++;
					}
					else
					break;
				}
				int len=r-l-1;
				if(len>max_len)
				{
					max_len = len;
					st=l+1;
					end=r-1;
				}
			}
			return s.substr(st,max_len);
		}
};
int main()
{
	solution s1;
	cout<<s1.longest_palindrome("madam");
}