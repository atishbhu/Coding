#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
}
void insertionSort(int a[],int n) {
	for(int i = 1; i < n; i++) {
		int j = i-1;
		while(j>=0 && a[j] > a[j+1]){
			swap(a[j],a[j+1]);
			j--;
		}
	}
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n ; i++) {
		cin>>a[i];
	}

	insertionSort(a,n);
	display(a,n);

}
