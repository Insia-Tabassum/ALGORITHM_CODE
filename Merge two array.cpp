#include <bits/stdc++.h>
using namespace std;

int* MergeArrays(int* A, int* B, int n, int m) {
    int i=0,j=0,k=0;
    int* C=new int[n+m];

    while (i<=n-1&&j<=m-1){
        if (A[i]>B[j]){
            C[k++]=B[j++];
        }
        else {
            C[k++]=A[i++];
        }
    }

    while (i<=n-1) {
        C[k++]=A[i++];
    }

    while(j<=m-1){
        C[k++]=B[j++];
    }

    return C;
}



int main(){
    int n, m;

    cout<<"Enter the size of array A: ";
    cin>>n;
    int* A = new int[n];
    cout<<"Enter elements of array A: ";
    for (int i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<"Enter the size of array B: ";
    cin>>m;
    int* B=new int[m];
    cout<<"Enter elements of array B: ";
    for (int i=0;i<m;i++){
        cin>>B[i];
    }

    int *C = MergeArrays(A, B, n, m);

    cout<<"Merged array C: ";
    for(int i=0;i<n+m;i++){
        cout<<C[i]<<" ";
    }
    //cout<<endl;
    return 0;
}
