#include <bits/stdc++.h>
using namespace std;

int getRemainder(vector<int>& A,int p) {
    int n = A.size();
    int start = 1; 
    int ans = 0;
    for(int i = n-1; i >= 0; i--) {
        ans += (A[i] * start) % p;
        start = (start * 10)%p; 
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    cout<<getRemainder(v,5);
}

