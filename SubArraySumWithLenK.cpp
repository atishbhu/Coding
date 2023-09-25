#include <bits/stdc++.h>
using namespace std;
int maxSubArraySumWithLenK(int a[], int n, int k) {
  int ans = INT_MIN;
    for(int i = 0; i<=n-k; i++) {
        int sum = 0;
        for(int j = i; j <= (i+k-1); j++){
            sum += a[j];
        }
        ans = max(ans,sum);
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n;i++) {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int ans = maxSubArraySumWithLenK(a,n,k);

    cout<<ans<<endl;
}
