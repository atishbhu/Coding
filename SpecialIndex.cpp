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
    prefix_sum[0] = 0;
    for(int i = 1; i < n; i++) {
        if(i%2 == 0) {
          prefix_sum[i] = prefix_sum[i-1];
        }else {
            prefix_sum[i] = prefix_sum[i-1] + a[i];
        }
    }
    return prefix_sum;
}

int getNumberOfSpecialIdx(int a[], int n) {

    vector<int>prefix_odd_sum = getPrefixOddSum(a,n);
    vector<int>prefix_even_sum = getPrefixEvenSum(a,n);
    int odd_sum = 0;
    int even_sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        odd_sum = 0;
        even_sum = 0;

        if(i == 0) {
            odd_sum = prefix_odd_sum[n-1] - prefix_odd_sum[i];
            even_sum = prefix_even_sum[n-1] - prefix_even_sum[i];
        }else {
            odd_sum = prefix_odd_sum[i-1] + prefix_even_sum[n-1] - prefix_even_sum[i];
            even_sum = prefix_even_sum[i-1] + prefix_odd_sum[n-1] - prefix_odd_sum[i];
        }

        if(odd_sum == even_sum) {
             count++;
        }
    }
 return count;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<getNumberOfSpecialIdx(a,n)<<endl;
}


/*
Given an array, arr[] of size N, the task is to find the count
 of array indices such that removing an element from these indices makes 
 the sum of even-indexed and odd-indexed array elements equal.



Problem Constraints
1 <= N <= 10^5
-10^5 <= A[i] <= 10^5
Sum of all elements of A <= 10^9


*/
