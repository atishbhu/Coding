#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> computePrefixSum(vector<vector<int>> matrix) {
    int rows = matrix.size();
    if (rows == 0) return {};

    int cols = matrix[0].size();
    vector<vector<int>> prefixSum(rows, vector<int>(cols, 0));

    prefixSum[0][0] = matrix[0][0];

    for(int i = 1; i < cols; i++) {
        prefixSum[0][i] = prefixSum[0][i-1] + matrix[0][i];
    }
     for(int i = 1; i < rows; i++) {
        prefixSum[i][0] = prefixSum[i-1][0] + matrix[i][0];
    }

    for(int i = 1; i < rows; i++) {
        for(int j = 1; j < cols; j++) {
            prefixSum[i][j] = prefixSum[i-1][j] + prefixSum[i][j-1] + matrix[i][j] - prefixSum[i-1][j-1];
        }
    }

    return prefixSum;

}
int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5,2},
        {4, 8, 5,0},
        {10, 20, -1,3}
    };

    vector<vector<int>> prefixSumMatrix = computePrefixSum(matrix);

    for (const auto& row : prefixSumMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
