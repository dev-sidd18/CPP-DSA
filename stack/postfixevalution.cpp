// #include <bits/stdc++.h>
// using namespace std;
// int st[100];
// int top=-1;
// void push(int x){
//     top=top+1;
//     st[top]=x;
// }

// int pop(){
//     int x;
//     x=st[top];
//     top=top-1;
//     return x;
//  }
// int main(){
//     string str;
//     cin>>str;
//     int i=0;
//     while(str[i]!='\0'){
//         if(isdigit(str[i])){
//             str[i]-='0';
//             push(str[i]);
//         }
//         else{
//             int n1=pop();
//             int n2=pop();
//             int res;
//         switch (str[i])
//         {
//         case '-': if(n1>n2){
//             res=n1-n2;
//             break;
//         }
//         else{
//             res=n2-n1;
//             break;
//         }
//         case '+': res=n1+n2;
//         break;
//         case '*': res=n1*n2;
//         break;
//         case '/': if(n1>n2){
//             res=n1/n2;
//         }
//         else{
//             res=n2/n1; 
//         }
//         break;
//         default:
//             break;
//         }
//         push(res);
//         }
//         i++;
//         }
//     cout<<pop();
//     }



// #include <bits/stdc++.h>
// using namespace std;
// int st[100];
// int top=-1;
// void push(int x){
//     top=top+1;
//     st[top]=x;
// }
// int pop(){
//     int x;
//     x=st[top];
//     top=top-1;
//     return x;
//  }
// int main(){
//     string str;
//     cin>>str;
//     int i=0;
//     string s;
//     while(str[i]!='\0'){
//         if(isdigit(str[i])){
//             int num=0;
//             while(str[i]!=','){
//                 num=num*10+(str[i]-'0');
//                 i++;
//             } 
//             push(num);
//             i++;
//         }
//         else{
//             int n1=pop();
//             int n2=pop();
//             int res=0;
//         switch (str[i])
//         {
//         case '-': if(n1>n2){
//             res=n1-n2;
//             break;
//         }
//         else{
//             res=n2-n1;
//             break;
//         }
//         case '+': res=n1+n2;
//               break;
//         case '*': res=n1*n2;
//               break;
//         case '/': if(n1>n2){
//             res=n1/n2;
//             break;
//         }
//         else{
//             res=n2/n1; 
//             break;
//         }
//         }
//         push(res);
//         i++;
//         }
//         }
//     cout<<pop();
//     }




#include <bits/stdc++.h>
using namespace std;

int st[100];
int top = -1;

void push(int x)
{
    if (top == 99)
    {
        cout << "Stack Overflow";
        exit(0);
    }
    st[++top] = x;
}

int pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow";
        exit(0);
    }
    return st[top--];
}

int main()
{
    string str;
    cin >> str;

    int i = 0;

    while (i < str.length())
    {
        if (isdigit(str[i]))
        {
            int num = 0;

            while (i < str.length() && str[i] != ',')
            {
                num = num * 10 + (str[i] - '0');
                i++;
            }

            push(num);

            if (i < str.length() && str[i] == ',')
                i++;
        }
        else
        {
            int n1 = pop(); 
            int n2 = pop(); 
            int res = 0;

            switch (str[i])
            {
            case '+':
                res = n2 + n1;
                break;

            case '-':
                res = n2 - n1;
                break;

            case '*':
                res = n2 * n1;
                break;

            case '/':
                res = n2 / n1;
                break;

            default:
                cout << "Invalid Operator";
                return 0;
            }

            push(res);
            i++;

            if (i < str.length() && str[i] == ',')
                i++;
        }
    }

    cout << pop();

    return 0;
}