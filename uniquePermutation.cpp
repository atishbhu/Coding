

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& A,int idx, vector<vector<int>>& ans,vector<int>& temp,int freq[]) {
    if(idx == A.size()) {
        ans.push_back(temp);
        return;
    }

    for(int i = 0; i <= 10; i++) {
        if(freq[i] > 0) {
            freq[i]--;
            temp[idx] = i;
            solve(A,idx + 1, ans,temp,freq);
            freq[i]++;
        }
    }
}

vector<vector<int>> permute(vector<int> &A) {
    int freq[11]={0};

    for(int i = 0; i < A.size(); i++) {
        freq[A[i]]++;
    }
    vector<vector<int>> ans;
    vector<int> temp(A.size());

    solve(A,0,ans,temp,freq);

    return ans;
}

int main() {
    vector<int> A = {10,9,10,9,10};
   vector<vector<int>> ans = permute(A);

   for(int i = 0; i < ans.size(); i++) {
       for(int j = 0; j < ans[i].size(); j++) {
           cout<<ans[i][j]<<" ";
       }
       cout<<endl;
   }
}
