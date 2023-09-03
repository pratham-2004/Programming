#include<iostream>
#include<stack>
void reverse(string s)
{
    stack<string> st;
    for(int i=0;i<s.length(),i++)
    {
        string a=" ";
        while(s[i]!=' ')
        {
            a+=s[i];
            i++;
        }
        st.push(a);
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();

        }
        cout<<endl;
    }
}
int main()
{
    string s="hello world";
    reverse(s);
}