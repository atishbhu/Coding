
#include <bits/stdc++.h>
using namespace std;

int getCountOFAndG(string str) {

    int count = 0;
    int len = str.size();
    int count_g[len]; 

    for(int i = len-1; i >=0; i--) {
       if(str[i] == 'g') {
           count++;
       }
       count_g[i] = count;
    }

    count = 0;
    for(int i = 0; i < len; i++) {
       if(str[i] == 'a') {
           count += count_g[i];
       }
    }
    return count;
}

int getCountOFAndGWithOutSpace(string str) {

    int count = 0;
    int len = str.size();
    int ans = 0;

    for(int i = len-1; i >=0; i--) {
       if(str[i] == 'g') {
           count++;
       }
       if(str[i] == 'a') {
           ans += count;
       }
    }
    return ans;
}

int main() {
    string s = "GAB";
    cout<<getCountOFAndGWithOutSpace(s)<<endl;
}


/*
You have given a string A having Uppercase English letters.
You have to find how many times subsequence "AG" is there in the given string.
NOTE: Return the answer modulo 109 + 7 as the answer can be very large.

Problem Constraints
1 <= length(A) <= 105

Input Format
First and only argument is a string A.

Output Format
Return an integer denoting the answer.

Example Input
Input 1:
A = "ABCGAG"
Input 2:
 A = "GAB"
Example Output
Output 1:
 3
Output 2:
 0
*/
