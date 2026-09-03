#include <bits/stdc++.h>
using namespace std;
void TOH(int n, char A, char B, char C){
    if(n==1){
        cout<<"move disk " <<n<< " from "<< A <<" to " <<C<<endl;
    }
    else{
        TOH(n-1, A,C,B);
        cout<<"Move disk "<< n<< " from "<< A<< " to "<< C<<endl;
        TOH(n-1,B,A,C);
    }
}
int main(){
    int n=3;
    TOH(n,'A','B','C');
}