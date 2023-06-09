/*
Problem Description

Write a program to input N numbers array, a number X and a number Y from user and insert an element Y in it at specified position X. X is based on 1-based indexing.

Note: When an element is inserted at position X, all elements that were already present at position >= X, gets shifted to one position right, not replaced.

Problem Constraints

1 <= N <= 100

1 <= A[i] <= 1000

1 <= X <= N

1 <= Y <= 1000

Input Format

First line is N which represents number of elements.

Second line contains N space separated integers.

Third line is X position where Y has to be inserted.

Fourth line is Y which is the value to be inserted.

Output Format

N+1 space separated integers of the input array after inserting the element at required position.

Example Input

Input 1:

5

2 3 1 4 2

3

5

Example Output

Output 1:

2 3 5 1 4 2

Example Explanation

Explanation 1:

Clearly after inserting 5 at 3rd position, new array is 2 3 5 1 4 2.
*/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void insertAtSpecifiedPos(vector<int> &a, int x,int y) {
    a.push_back(0);
	for(int i=a.size()-1;i>=x-1;i--) {
		a[i] = a[i-1];
	}
	a[x-1] = y;
}

void insertAtSpecifiedPosOp(std::vector<int>& a, int x, int y) {
    a.insert(a.begin() + x - 1, y);
}

int main() {

	int n;
	cin>>n;
	vector<int> a;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }

	int x,y;
	cin>>x>>y;
	insertAtSpecifiedPosOp(a,x,y);

	for(int i=0;i<a.size();i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}
