#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
void insert(node* head, int data){
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    node* curr=new node(data);
    temp->next=curr;
}
void pop(node*& head){
    node* temp= head->next;
    delete head;
    head=temp;
}
void display(node*& head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
node* head= new node(10);
insert(head,20);
pop(head);
pop(head);
display(head);
}