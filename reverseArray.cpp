#include <bits/stdc++.h>
using namespace std;

void reverse(int a[],int n) {
	int i=0;
	int j = n-1;
	while(i<j) {
		swap(a[i],a[j]);
		i++;
		j--;
	}
}
void display(int a[],int n) {
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void reverseLtoR(int a[],int n,int L,int R) {
	int i = 0;
	int j = n-1;
	for(int i=L,j=R;i<j;i++,j--) {
		swap(a[i],a[j]);
	}
}
int main() {
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	// reverse(a,n);
	int L,R;
	L=1,R=5;
	reverseLtoR(a,n,L,R);
	display(a,n);
}
