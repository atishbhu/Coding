// Source: https://usaco.guide/general/io


/*
You will be given an integer value. You need to reverse the digits of the integer. Time complexity should be O(count) and auxiliary space complexity should be O(1) where the count is the number of digits in the given integer.
Note: Use data type ‘int’ to store the result, do not use double or long to store the result and finally typecast it to int.


Input: The input will be in the following format : 
The first line should be the value of n.


Output: The output should be of the following format
In the first line print the number in reverse order or 
If an overflow occurred, please print 0 in the first line


Note: If the overflow occurs print 0 in the first line.


Example : 
Input : 
12345
Output:
54321


Input : 
-12345
Output:
-54321


Input:
1000
Output:
1
*/
#include <bits/stdc++.h>
using namespace std;

void print_reverse(int n) {

	bool is_negative = (n<0);
	if(is_negative) n = -1 * n;
	int rev = 0;
	while(n>0) {
		int rem = n%10;
		rev = rev*10 + rem;
		n /= 10;
	}
	if(is_negative) rev = -1 * rev;

	cout<<rev<<endl;
}

int main() {
	int n;
	cin>>n;
	print_reverse(n);
	return 0;
}
