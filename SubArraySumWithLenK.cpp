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
int slidingWindow(int a[],int n,int k) {
    int sum = 0;
    for(int i = 0; i<k;i++) {
        sum += a[i];
    }
    int ans = sum;
    for(int i=1;i<=n-k;i++) {
        sum = sum + a[i+k-1] - a[i-1];
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
    int ans = slidingWindow(a,n,k);

    cout<<ans<<endl;
}
