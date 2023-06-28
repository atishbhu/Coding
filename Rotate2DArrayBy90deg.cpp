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

void rotate2DArrayUsingRotation(vector<vector<int>> a) {

    int n = a.size();
    for(int i=0;i<n/2;i++) {
        for(int j=0;j<n-i-1;j++) {

            int temp = a[i][j];
            a[i][j] = a[n-1-j][i];
            a[n-1-j][i] = a[n-1-i][n-1-j];
            a[n-1-i][n-1-j] = a[j][n-1-i];
            a[j][n-i-1] = temp;
        }
    }
    display(a);
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

     rotate2DArrayUsingRotation(a);
    // display(ans);

    return 0;
}

