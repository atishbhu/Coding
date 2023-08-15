# Matrix Addition in C++

This is a C++ program that demonstrates how to perform matrix addition.

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to add two matrices 'a' and 'b'
vector<vector<int>> solve(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> ans;

    int rows = a.size();
    int col = a[0].size();

    for (int i = 0; i < rows; i++) {
        vector<int> temp;
        for (int j = 0; j < col; j++) {
            int sum = a[i][j] + b[i][j];  // Add corresponding elements
            temp.push_back(sum);
        }
        ans.push_back(temp);
    }

    return ans;  // Return the resulting matrix
}

int main() {
    vector<vector<int>> a;
    vector<vector<int>> b;

    int m, n;
    cin >> m >> n;  // Input dimensions

    // Input matrix 'a'
    for (int i = 0; i < m; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }

    // Input matrix 'b'
    for (int i = 0; i < m; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        b.push_back(temp);
    }

    // Call the 'solve' function to get the result matrix
    vector<vector<int>> ans = solve(a, b);

    // Print the resulting matrix 'ans'
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
## Explanation
- The solve function takes two matrices a and b as input and returns the matrix obtained by adding corresponding elements of a and b.
- The nested loops in the solve function iterate through each element of a and b, calculate the sum, and store it in the ans matrix.
- In the main function, the code takes input for the dimensions and elements of matrices a and b.
- It then calls the solve function to obtain the result matrix and prints the result.
