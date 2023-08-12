#include <bits/stdc++.h>
using namespace std;

int countNumberOfSubArray(vector<int>& x, int k) {
    int ans = INT_MIN;
    int sum = 0;
    int n = x.size();

    for(int i = 0; i<=n-k;i++) {
        sum = 0;
        for(int j = i; j<=i+k-1;j++) {
            sum += x[j];
        }
        ans = max(ans,sum);
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    while(n--) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k = 2;
    int ans = countNumberOfSubArray(v,k);
    cout<<ans<<endl;
}
