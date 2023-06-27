#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate2DArrayUsingTranspose(vector<vector<int>> A) {

    int rows = A.size();
    int cols = A[0].size();

    vector<vector<int>> Transpose(rows,vector<int>(cols));
    for(int i=0;i<rows;i++) {
        for(int j=i;j<cols;j++) {
            swap(A[i][j],A[j][i]);
        }
    }

     for(int i=0;i<rows;i++) {
        for(int j=0;j<cols/2;j++) {
            swap(A[i][j],A[i][rows-j-1]);
        }
    }

    return A;

    
}

void display (vector<vector<int>> ans) {
    int rows = ans.size();
    int cols = ans[0].size();
     for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> a(n,vector<int>(m));

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }

    vector<vector<int>> ans = rotate2DArrayUsingTranspose(a);
    display(ans);

    return 0;
}

