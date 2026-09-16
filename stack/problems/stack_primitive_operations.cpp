#include <iostream>
#include <string>
using namespace std;
int mystack[100];
int top=-1;
void display(){
    for(int i=0;i<=top;i++){
        cout<<mystack[i]<<" ";
    }
    cout<<endl;
}
void push(int key){
if(top==99){
    cout<<"stack overflow \n";
    return ;
}
else{
    mystack[++top]=key;
    display();
}
}
int pop(){
    if(top==-1){
        cout<<"stack underflow \n";
    }
    else{
        int x=mystack[top];
        top--;
        display();
        return x;
    }
}
int main(){
push(10);
push(30);
push(100);
pop();
pop();
pop();
pop();
}