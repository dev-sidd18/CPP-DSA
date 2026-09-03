#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int l, int r){
    int pivat=arr[r];
    int i=l-1;
    for(int j=l;j<r-1;j++){
        if(pivat>=arr[j]){
            i++;
        }
        swap(arr[i],arr[j]);
    }
    swap(arr[i+1],arr[r]);
    return(i+1);
}
void Quick_sort(int arr[], int l,int r){
    if(l<r){
        int p=partition(arr,l,r);
        Quick_sort(arr,l,p-1);
        Quick_sort(arr,p+1,r);
    }
}
int main(){
    int arr[9]={1,9,8,4,5,7,3,2,6};
    Quick_sort(arr,0,9);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}