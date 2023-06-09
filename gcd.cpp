// Source: https://usaco.guide/general/io

/*
Problem Description
Given 2 non-negative integers A and B, find gcd(A, B)

GCD of 2 integers A and B is defined as the greatest integer 'g' such that 'g' is a divisor of both A and B. Both A and B fit in a 32 bit signed integer.

Note: DO NOT USE LIBRARY FUNCTIONS.



Problem Constraints
0 <= A, B <= 109



Input Format
First argument is an integer A.
Second argument is an integer B.



Output Format
Return an integer denoting the gcd(A, B).



Example Input
Input 1:

A = 4B = 6
Input 2:

A = 6B = 7


Example Output
Output 1:

 2
Output 2:

 1


Example Explanation
Explanation 1:

 2 divides both 4 and 6
Explanation 2:

 1 divides both 6 and 7

*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
	int minimum = min(a,b);
	int ans = 1;
	for(int i=1; i<=minimum; i++) {
		if(a%i ==0 && b%i ==0 ) {
			ans = i;
		}
	}
	return ans;
}

int gcdUsingEuclid(int a,int b) {
	if(a==0) 
	    return b;
	if(b==0)
	    return a;
	if(a==b)
	    return a;
	if(a>b) 
	  return gcd(a-b,b);
	return gcd(a,b-a);
}

int gcdUsingEuclidEnhance(int a , int b) {
	if(b==0) 
	   return a;
	return gcdUsingEuclidEnhance(b,a%b);
}

int main() {
	int a,b;
	cin>>a>>b;

	cout<<gcdUsingEuclidEnhance(a,b)<<endl;

	return 0;
}
