#include <iostream>
using namespace std;
int mystack[100];
int top=-1;
void decimaltobinary(int num){
    top=-1;
    if(num==0){
    cout<<0<<endl;
    return;
}
while(num>0){
    int x=num%2;
    mystack[++top]=x;
    num=num/2;
}
for(int i=top;i>=0;i--){
    cout<<mystack[i];
}
cout<<endl;
}
int main(){
decimaltobinary(20);
decimaltobinary(50);
}