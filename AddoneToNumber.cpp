#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin>>A[i];
    }

    A[n-1] = A[n-1] + 1;
    int carry = A[n-1] / 10;
    A[n-1] = A[n-1] % 10;

    for(int i = n-2; i >=0 && carry>0; i--) {
        A[i] += carry;
        carry = A[i]/10;
        A[i] = A[i] % 10;
    }
    if(carry > 0) {
        A.insert(A.begin(), carry);
    }

     for(int i = 0; i < A.size(); i++) {
        cout<<A[i] <<" ";
    }

    return 0;
}
