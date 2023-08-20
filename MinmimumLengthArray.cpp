#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int minA=INT_MAX, maxA=INT_MIN;
    for(int i = 0; i<n; i++) {
        cin>>a[i];
        minA = min(a[i],minA);
        maxA = max(a[i],maxA);
    }

    int minId = -1;
    int maxId = -1;
    int ans = INT_MAX;
    for(int i = n-1; i>0; i--) {
        if(a[i] == minA) {
            minId = i;
            if(maxId != -1) {
                ans = min(ans,maxId-minId+1);
            }
        }
        if(a[i] == maxA) {
            maxId = i;
            if(minId != -1) {
                ans = min(ans,minId-maxId+1);
            }
        }
    }
    cout<<ans;
    return 0;
}
