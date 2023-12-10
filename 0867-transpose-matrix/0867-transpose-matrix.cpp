class Solution {
public:
    // Function to compute the transpose of a given matrix
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();    // Get the number of rows in the original matrix
        int col = matrix[0].size(); // Get the number of columns in the original matrix

        // Create a new matrix to store the transposed elements
        vector<vector<int>> ans(col, vector<int>(row)); // New matrix with dimensions col x row

        // Traverse through the original matrix
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                // Assign transposed elements to the new matrix
                ans[j][i] = matrix[i][j]; // Transpose by swapping row and column indices
            }
        }
        return ans; // Return the transposed matrix
    }
};