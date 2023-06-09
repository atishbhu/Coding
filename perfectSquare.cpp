/*
You are given a function that takes an integer 
argument A. Return 1 if A is a perfect square otherwise return 0
*/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool is_perfect_square(int a) {

	for(int i=1; i*i<= a ; i++) {
		if(i*i == a) return 1;
	}
	return 0;
}

int main() {
	int a;

	cin>>a;

	if(is_perfect_square(a)) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}

	return 0;
}
