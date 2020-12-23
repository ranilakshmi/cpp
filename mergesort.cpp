#include<iostream>
using namespace std;
void merge(int A[],int p,int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1];
    int R[n2];
    int i,j;
    for(i=0;i<n1;i++){
        L[i] = A[p+i];
    }
    for(j=0;j<n2;j++){
        R[j] = A[q+j+1];
    }
    i = 0;
    j = 0;
    int k = p;
    while(i<n1 && j < n2){
        if(L[i] <=R[j]){
            A[k] = L[i];
            i++;
            k++;
        }
        else{
            A[k] = R[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        A[k++] = L[i++];
    }
    while(j<n2){
        A[k++] = R[j++];
    }
}
void mergesort(int A[],int p,int r){
    int q;
    if(p<r){
        q = (p+r)/2;
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        merge(A,p,q,r);
    }
}
int main(){
    int A[] = {7,3,4,2,5,1,6,8};
    mergesort(A,0,7);
    for(int i=0;i<8;i++){
        cout << A[i] << " ";
    }
}
