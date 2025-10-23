#include <iostream>
#include <vector>
using namespace std;

// Function to traverse matrix in spiral order
vector<int> spirallyTraverse(vector<vector<int>>& mat) {
    int m = mat.size();       // number of rows
    int n = mat[0].size();    // number of columns
    vector<int> res;

    // Define the boundaries
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    // Loop until boundaries overlap
    while (top <= bottom && left <= right) {
        // Step 1: Traverse from left to right
        for (int j = left; j <= right; j++)
            res.push_back(mat[top][j]);
        top++;  // move boundary down

        // Step 2: Traverse from top to bottom
        for (int i = top; i <= bottom; i++)
            res.push_back(mat[i][right]);
        right--;  // move boundary left

        // Step 3: Traverse from right to left (if still valid)
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                res.push_back(mat[bottom][j]);
            bottom--;  // move boundary up
        }

        // Step 4: Traverse from bottom to top (if still valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                res.push_back(mat[i][left]);
            left++;  // move boundary right
        }
    }

    return res;
}

int main() {
    // Example 4x4 matrix
    vector<vector<int>> mat = { { 1, 2, 3, 4 },
                                { 5, 6, 7, 8 },
                                { 9, 10, 11, 12 },
                                { 13, 14, 15, 16 } };

    // Get spiral traversal
    vector<int> res = spirallyTraverse(mat);

    // Print result
    cout << "Spiral Order Traversal: ";
    for (int num : res) {
        cout << num << " ";
    }

    return 0;
}