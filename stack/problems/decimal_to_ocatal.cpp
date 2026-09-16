#include <bits/stdc++.h>
using namespace std;
int mystack[100];
int top=-1;
void decimaltoocatal(int num){
    if(num==0)
    cout<<0;
    else{
while(num>0){
    int x=num%8;
    mystack[++top]=x;
    num=num/8;
}
for(int i=top;i>=0;i--){
    cout<<mystack[i];
}
}
}
int main(){
decimaltoocatal(100);
}