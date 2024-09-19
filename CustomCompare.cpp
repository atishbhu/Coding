#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    vector<string> st = {"9", "90", "908"};
    sort(st.begin(), st.end(),compare);
    string ans = "";
    for(int i = 0; i < st.size(); i++) {
        ans += st[i];
    }
    cout<<ans;
}
