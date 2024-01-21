#include<bits/stdc++.h>
using namespace std;

vector<int> getPrefixSum(int a[],int n) {
  vector<int> prefix_sum(n,0);
  prefix_sum[0] = a[0];

  for(int i = 1; i < n; i++) {
    prefix_sum[i] = prefix_sum[i-1] + a[i];
  }

  return prefix_sum;
}

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }

  vector<int> ans = getPrefixSum(a,n);

  for(int i = 0; i < ans.size(); i++) {
    cout<<ans[i]<<" ";
  }

  cout<<endl;
  return 0;
}
