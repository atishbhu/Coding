#include <bits/stdc++.h>
using namespace std;

int countDistinctPair(vector<int> a, int k){
    int n = a.size();
    int count = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == k) {
                count ++;
            }
        }
    }
    return count;
}
int binarySearch(vector<int>& a, int k,int i, int j) {
    int n = a.size();
    while(i<=j) {
        int mid = i + (j-i) / 2;
        if(a[mid] == k){
            return mid;
        }else if(a[mid] > k) {
            j = mid - 1;
        }else {
            i = mid + 1;
        }
    }
    return -1;
}

int countDistinctPairOptimised(vector<int>& a, int k) {
    int n = a.size();
    int count = 0;
    int i = 0, j = n-1;
    while(i < j) {
        int sum = a[i] + a[j];
        if(sum == k) {
            count++;
            i++;
            j--;
        }else if(sum > k) {
            j--;
        }else{
            i++;
        }
    }
    return count;
}

int countDistinctPairWithBs(vector<int>& a, int k) {
    int count = 0;
    int n = a.size();
    for(int i =0 ; i < n; i++) {
        int target = k - a[i];
        if(binarySearch(a,target,i+1, n-1) != -1) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i = 0; i < n; i ++) {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<countDistinctPairWithBs(a,k);
}
