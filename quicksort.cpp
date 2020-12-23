#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int A[],int p,int r){
    int x = A[r];
    int i = p-1;
    for(int j=p;j<=r-1;j++){
        if(A[j] < x){
            i = i+1;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[i+1],&A[r]);
    return i+1;
}
void quicksort(int A[],int p,int r){
    if(p<r){
        int q = partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}
int main(){
    int A[] = {4,2,5,1,3,6,8,7};
    for(int i=0;i<8;i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    quicksort(A,0,7);
    for(int i=0;i<8;i++){
        cout << A[i] << " ";
    }
    cout << "\n";
}
