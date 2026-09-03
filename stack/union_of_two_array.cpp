#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of first array :";
    cin >> n;
    int A[n];
    cout<<"enter values "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int m;
    cout<<"enter the size of second array :";
    cin >> m;
    int B[m];
    cout<<"enter values "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    vector<int>C;
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(A[i]<B[j]){
            C.push_back(A[i]);
            i++;
        }
        else if( B[j]< A[i]){
         C.push_back(B[j]);
         j++;
        }
        else if( A[i]==B[j]){
            C.push_back(A[i]);
            i++;
            j++;
        }
    }
    while(i<n){
       C.push_back(A[i]);
        i++;
    }
    while(j<m){
        C.push_back(B[j]);
        j++;
    }
    cout<<"union :";
    for (int i = 0; i<C.size(); i++)
    {
        cout<<C[i]<<" ";
    }
}
