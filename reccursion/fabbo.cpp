// #include <bits/stdc++.h>
// using namespace std;
// int fabb(int n){
//     if(n==1|| n==2){
//         return n-1;
//     }
//     else{
//         return fabb(n-1)+fabb(n-2);
//     }
// }
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     int fab=fabb(i);
//     cout<<fab<<" ";
// }
// }

#include <bits/stdc++.h>
using namespace std;
long long DAT[1000]={0};  //direct address table
int fabb(int n){
    if(n==1|| n==2){
        return DAT[n]=n-1;
    }
    else{
        if(DAT[n]==0){
            DAT[n]=fabb(n-1)+fabb(n-2);
        }
        return DAT[n];
    }
}
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    cout<<fabb(i)<<" ";
}
}