#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int m;
    cin >> m;
    int B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    int C[n+m]={0};
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else if( B[j]< A[i]){
         C[k]=B[j];
         j++;
         k++;
        }
        else if( A[i]==B[j]){
            C[k]=A[i];
            k++;
            i++;
            C[k]=B[j];
            k++;
            j++;
        }
    }
    while(i<n){
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<m){
        C[k]=B[j];
        j++;
        k++;
    }
    for (int i = 0; i<(m+n); i++)
    {
        cout<<C[i]<<" ";
    }
}
