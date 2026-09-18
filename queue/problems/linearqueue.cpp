#include <bits/stdc++.h>
using namespace std;
int myq[50];
int rear=-1;
int front=-1;
void insert(int kay){
    if(rear==49){
        cout<<"overflow \n";
        return ;
    }
    if(front==-1){
        front=0;
    }
       myq[++rear]=kay ; 

    for(int i=0;i<=rear;i++){
        cout<<myq[i]<<" ";
    }
    cout<<endl;
}
void del(){
    if(front==rear+1){
        cout<<"underflow";
        return;
    }
    else{
        int x=myq[front];
        front++;
        cout<<"deleted ele :"<<x;
    }
    cout<<endl;
}
int main(){
insert(10);
insert(20);
insert(30);
del();
del();
del();
del();
}