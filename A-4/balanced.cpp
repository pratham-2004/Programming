#include <iostream>
#include <string>
using namespace std;

char arr[100]={};
int top = -1;

void isbalanced(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (top == -1) {
            top++;
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
                arr[top] = s[i];
        } 
        else if ((arr[top] == '(') && (s[i] == ')') ||
                   (arr[top] == '{') && (s[i] == '}') ||
                   (arr[top] == '[') && (s[i] == ']')) {
            top--;
        } 
        else {
            top++;
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') arr[top] = s[i];
        }
    }

    if (top == -1) cout <<  "BALANCED";
    else cout << "UNBALANCED"; 
}

int main() {
    isbalanced("{()}");
}
