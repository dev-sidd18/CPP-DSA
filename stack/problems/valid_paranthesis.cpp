#include <bits/stdc++.h>
using namespace std;

int mystack[50];
int top = -1;

bool para(string key) {
    top = -1;
    for(int i = 0; i < key.size(); i++) {
        if(key[i] == '(' || key[i] == '{' || key[i] == '[') {
            mystack[++top] = key[i];
        }
        else if(key[i] == ')' || key[i] == '}' || key[i] == ']') {
            if(top == -1)
                return false;
            if((key[i] == ')' && mystack[top] == '(') ||
               (key[i] == '}' && mystack[top] == '{') ||
               (key[i] == ']' && mystack[top] == '[')) {

                top--;
            }
            else {
                return false;
            }
        }
    }
    return top == -1;
}
int main() {
    string s;
    cin >> s;
    bool valid = para(s);
    if(valid)
        cout << "balance";
    else
        cout << "not balance";
    return 0;
}