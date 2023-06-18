#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    vector<vector<int>> b(n,vector<int>(m));

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }

     for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>b[i][j];
        }
    }
    vector<vector<int>> ans(n,vector<int> (m,0));
     for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int sum = 0;
            for(int k=0;k<m;k++) {
                sum += a[i][k] * b[k][j];
            }
            ans[i][j] = sum;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

