// #include <bits/stdc++.h>
// using namespace std;
// #define MAXSIZE 50
// int mystack[MAXSIZE];
// int top=-1;
// int push(){
// if(top>MAXSIZE-1){
//     cout<<"overflow";
//     return -1;
// }
// else{
//     int x;
//     cout<<"enter number"<<" ";
//     cin>>x;
//     top=top+1;
//     mystack[top]=x;
// }
// }
// int pop(){
// if(top=-1){
//     cout<<"underflow";
//     return -1;
// }
// else{
//     int x=mystack[top];
//     top=top-1; 
//     return x;
// }
// }
// void  display(){
//     for(int i=top;i>=0;i--){
//         cout<<mystack[i]<<" ";
//     }
// }
// int main(){
//     int choice;
//     do{
//         cin>>choice;
//         switch (choice)
//         {
//         case 1: push();
//         break;
//         case 2: cout<<pop();
//         break;
//         case 3: display();
//         break;
        
//         default: cout<<"you choice is wrong";
//             break;
//         }
//     }
//     while(choice<=3);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=nullptr;
//     }
// };
// int push(Node* &head){
// int x;
// cout<<"enter value";
// cin>>x;
// Node* temp= new Node(x);
// Node*curr=head;
// if(head->data=-1){
// head=temp;
// curr=head;
// }
// else{
// curr->next=temp;
// curr=curr->next;
// }
// }
// int pop(Node* &head){
// if(head=NULL){
//     cout<<"underflow";
// }
// else{
//     int x=head->data;
//     Node*temp=head;
//     head=head->next;
//     delete temp;
//     return x;
// }
// }
// int display(Node* &head){
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// }

// int main(){
//     Node* head=new Node(-1);
//     int choice;
//     do{
//         cin>>choice;
//         switch (choice)
//         {
//         case 1: push(head);
//         break;
//         case 2: cout<<pop(head);
//         break;
//         case 3: display(head);
//         break;
        
//         default: cout<<"you choice is wrong";
//             break;
//         }
//     }
//     while(choice<=3);
// }


// #include <bits/stdc++.h>
// using namespace std;
// char mystack[100];
// int top=-1;
// void push(char s){
//     top=top+1;
//     mystack[top]=s;
// }
// int pop(){
//     while(top!=-1){
//     char temp=mystack[top];
//     top=top-1;
//     return temp;
// }
// }

//reverse a string 


// #include <bits/stdc++.h>
// using namespace std;
// void push(char arr[],char l,int &top){
// top=top+1;
// arr[top]=l;
// }
// char pop(char arr[],int &top){
//     while(top!=-1){
//     char last=arr[top];
//     top=top-1;
//     return last;
//   }
// }
// int main(){
//     char arr[100];
//     int top=-1;
//     string s;
//     cin>>s;
//     int i=0;
//     while(s[i]!='\0'){
//         push(arr,s[i],top);
//         i++;
//     }
//     while(top!=-1){
//     cout<<pop(arr,top);
//     }
// }


//check palindrom
// #include <bits/stdc++.h>
// using namespace std;
// void push(char arr[],char l,int &top){
// top=top+1;
// arr[top]=l;
// }
// string pop(char arr[],int &top){
//     string rev;
//     while(top!=-1){
//     char last=arr[top];
//     top=top-1;
//     rev=rev+last;
//   }
//   return rev;
// }
// int main(){
//     char arr[100];
//     int top=-1;
//     string s;
//     cin>>s;
//     string original=s;
//     int i=0;
//     while(s[i]!='\0'){
//         push(arr,s[i],top);
//         i++;
//     }
//     string rev;
//     while(top!=-1){
//     rev=pop(arr,top);
//     }
// if(original==rev){
//     cout<<"palindrom";
// }
// else
// cout<<"not a palindrom";
// }



//binary to decimal

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int bin;
    cin>>bin;
    int dec=0;
    int i=0;
    while(bin>0){
        dec+=bin%10*pow(2,i);
        i++;
        bin=bin/10;
    }
    cout<<dec;
}*/