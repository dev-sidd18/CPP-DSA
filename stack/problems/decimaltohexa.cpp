#include <bits/stdc++.h>
using namespace std;
int mystack[50];
int top=-1;
char DAT[6]={'A','B','C','D','E','F'};
void binarytohexa(int num){
if(num==0){
    cout<<0;
}
else{
    while(num>0){
        int x=num%16;
        mystack[++top]=x;
        num=num/16;
    }
}
for(int i=top;i>=0; i--){
    if(mystack[i]>10)
    cout<<DAT[mystack[i]-10];

     else
    cout<<mystack[i];
}
}
int main(){
binarytohexa(500);
}