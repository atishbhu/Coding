# Matrix Multiplication in C++

Below is a C++ program that demonstrates how to perform matrix multiplication.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // Input number of rows and columns

    // Input matrices A and B
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];  // Input element of matrix A
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];  // Input element of matrix B
        }
    }

    // Matrix multiplication: Result matrix 'ans' = A * B
    vector<vector<int>> ans(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = 0;
            for (int k = 0; k < m; k++) {
                sum += a[i][k] * b[k][j];  // Multiply and accumulate
            }
            ans[i][j] = sum;  // Store the result in the answer matrix
        }
    }

    // Output the result matrix 'ans'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
