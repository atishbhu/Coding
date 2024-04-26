
#include <bits/stdc++.h>
using namespace std;

vector<int> getPrefixEvenSum(int a[], int n) {
    vector<int> prefix_sum(n,0);
    prefix_sum[0] = a[0];
    for(int i = 1; i < n; i++) {
        if(i%2 == 0) {
         prefix_sum[i] = prefix_sum[i-1] + a[i];
        }else {
            prefix_sum[i] = prefix_sum[i-1];
        }
    }
    return prefix_sum;
}

vector<int> getPrefixOddSum(int a[], int n) {
    vector<int> prefix_sum(n,0);
    prefix_sum[0] = a[0];
    for(int i = 1; i < n; i++) {
        if(i%2 == 0) {
          prefix_sum[i] = prefix_sum[i-1];
        }else {
            prefix_sum[i] = prefix_sum[i-1] + a[i];
        }
    }
    return prefix_sum;
}

int findEvenIdxSumLTR(int a[],int n,int l, int r) {
    vector<int>prefix_sum = getPrefixEvenSum(a,n);
    if(l == 0) {
        return prefix_sum[r];
    }else{
        return prefix_sum[r] - prefix_sum[l-1];
    }

}

int findEvenIdxOddLTR(int a[],int n,int l, int r) {
    vector<int>prefix_sum = getPrefixOddSum(a,n);
    if(l == 0) {
        return prefix_sum[r];
    }else{
        return prefix_sum[r] - prefix_sum[l-1];
    }

}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<findEvenIdxSumLTR(a,n,1,5)<<endl;
    cout<<findEvenIdxOddLTR(a,n,1,5)<<endl;
}
