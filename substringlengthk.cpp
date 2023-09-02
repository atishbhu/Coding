#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "abcdef";
    int k;
    cin>>k;
    for(int i = 0; i <= s.length()-k; i++) {
        string temp = s.substr(i,k);
        cout<<temp<<" ";
    }
}
