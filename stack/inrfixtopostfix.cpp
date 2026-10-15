#include <bits/stdc++.h>
using namespace std;
int precedence(char ch) {
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}
int main() {
    string s, ans = "";
    stack<char> st;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (isalnum(ch)) {
            ans += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else {
            while (!st.empty() && st.top() != '(' &&
                   (precedence(st.top()) > precedence(ch) ||
                   (precedence(st.top()) == precedence(ch) && ch != '^'))) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    cout << ans;
    return 0;
}
