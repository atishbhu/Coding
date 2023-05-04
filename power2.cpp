/*
A number n is called special number if n can be expressed as the power of two integers.
n = pow(x,y), where x>0 and y>1.


Input: The input will be in the following format: 
The first line takes the value of n.
Output: The output should be of the following format:
The first line prints “true” if pow(x,y)=n, where x>0 and y>1 otherwise print “false”.


Example : 
Input : 
8
Output:
true
*/
#include <bits/stdc++.h>
using namespace std;


bool is_power_of2(int n) {

	return (n & n-1);
}

int main() {
	int n;
	cin>>n;
	if(!is_power_of2(n)){
		cout<<"true"<<endl;
	} else {
		cout<<"false"<<endl;
	}

	return 0;
}
