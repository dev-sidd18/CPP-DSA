// #include <bits/stdc++.h>
// using namespace std;
// bool is_match(char a, char b){
// if(a=='['&& b==']' ||a=='('&&b==')'||a=='{'&&b=='}'){
//     return true;
// }
// else{
//     return false;
// }
// }
// bool is_balance(string &str){
//     stack<char>s;
//     for(auto x:str){
//         if(x=='('|| x== '{'||x=='['){
//             s.push(x);
//         }  
//         else if(s.empty()==true){
//             return false;
//     }   
//      else if(x==')'||x=='}'||x==']'){
//         bool a=is_match(s.top(),x);
//         if(a==false){
//             return false;
//         }
//         else{
//             s.pop();
//         }
//     }
//          if(s.empty()){
//             return true;
//         }
//     }
// }
// int main(){
//    string str;
//    cin>>str;
//     bool y=is_balance(str);
//    if(y==true){
//     cout<<"balanced";
//    }
//    else{
//     cout<<"not balanced";
//    }
// }


//wothout STL 

#include <iostream>
using namespace std;

bool is_match(char a, char b) {
    if ((a == '[' && b == ']') || (a == '(' && b == ')') || (a == '{' && b == '}')) {
        return true;
    }
    return false;
}

bool is_balance(char str[], int len) {
    char stack[1000];   
    int top = -1;       

    for (int i = 0; i < len; i++) {
        char x = str[i];

        if (x == '(' || x == '{' || x == '[') {
            top++;
            stack[top] = x;
        }
        else if (x == ')' || x == '}' || x == ']') {
            if (top == -1) {          
                return false;
            }
            char last = stack[top];
            if (!is_match(last, x)) {
                return false;
            }
            top--;                     
        }
    }

    return (top == -1);   
}

int main() {
    char str[1000];
    cin >> str;

    int len = 0;
    while (str[len] != '\0') 
    len++;   

    bool y = is_balance(str, len);

    if (y == true) {
        cout << "balanced";
    } else {
        cout << "not balanced";
    }
}
