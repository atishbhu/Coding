#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

vector<int> convertAndSort2DTo1D(vector<vector<int>>& matrix) {
    vector<int> result;
    int rows = matrix.size();
    if (rows == 0) return result;
    int cols = matrix[0].size();

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> minHeap;

    for (int i = 0; i < rows; ++i) {
        if (!matrix[i].empty()) {
            minHeap.emplace(matrix[i][0], i, 0);
        }
    }

    while (!minHeap.empty()) {
        auto [val, row, col] = minHeap.top();
        minHeap.pop();
        result.push_back(val);

        if (col + 1 < cols) {
            minHeap.emplace(matrix[row][col + 1], row, col + 1);
        }
    }

    return result;
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, 11}
    };

    vector<int> sortedArray = convertAndSort2DTo1D(matrix);
    printArray(sortedArray);  
    return 0;
}
