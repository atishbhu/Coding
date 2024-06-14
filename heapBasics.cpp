#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& A,int i) {
    int j = i; 
    int temp = A[i];
    while(j > 0 && temp < A[(j-1)/2]) {
        A[j] = A[(j-1)/2];
        j = (j-1)/2;
    }
    A[j] = temp;
}

void heapify(vector<int>& A,int n,int i) {
    int largest = i;
    int l = 2*i+1;
    int r = 2*i + 2;
    if(l < n && A[i] > A[l]){
        largest = l;
    }
    if(r < n && A[largest] > A[r]) {
        largest = r;
    }
    if(largest != i) {
        swap(A[largest],A[i]);
        heapify(A,n,largest);
    }
}
int deleteMin(vector<int>& A,int h) {
    int temp = A[0];
    swap(A[0],A[h]);
    int i = 0;
    while(i < h) {
        int minIdx = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if(l < h && A[i] > A[l]) {
            minIdx = l;
        }
        if(r < h && A[minIdx] > A[r]) {
            minIdx = r;
        }
        if(minIdx == i) {
            break;
        }
        swap(A[minIdx],A[i]);
        i = minIdx;
    }
    return temp;
}
void convertItToHeap(vector<int>& A){
    int n = A.size();
    if(n == 0) {
        return;
    }
    for(int i = 0; i < n; i++) {
        insert(A,i);
    }
}
void buildHeap(vector<int>& arr) {
    int n = arr.size();
    int startIdx = (n / 2) - 1 ;
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr,n,i);
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin>>A[i];
    }
    buildHeap(A);
    for(int i = 0; i < n; i++) {
        cout<<deleteMin(A,n-i-1)<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++) {
        cout<<A[i]<<" ";
    }
}
