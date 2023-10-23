#include <bits/stdc++.h>
using namespace std;

int smallestSubArMinMax(int a[], int n) {
	int mx = INT_MIN;
	int mn = INT_MAX;
	int ans = INT_MAX;

	for(int i = 0; i<n;i++) {
		if(mn > a[i]){
			mn = a[i];
		}
		if(mx < a[i]){
			mx = a[i];
		}
	}
	int minId = -1, maxId = -1;

	for(int i = n-1; i >=0; i--) {
		if(a[i] == mn){
			minId = i;
			if(maxId!=-1){
				ans = min(ans, maxId-minId+1);
			}
		}
		if(a[i] == mx){
			maxId = i;
			if(minId!=-1){
				ans = min(ans, minId-maxId+1);
			}
		}
	}
	return ans;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n ; i++) {
		cin>>a[i];
	}

	cout<<smallestSubArMinMax(a,n);
}
