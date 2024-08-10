class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 0; i <= rows - 3; i++) {
            for (int j = 0; j <= cols - 3; j++) {
                if (isValidMagicSquare(grid, i, j)) {
                    count++;
                }
            }
        }

        return count;
    }

private:
    bool isValidMagicSquare(const vector<vector<int>>& grid, int startRow, int startCol) {
        // Create a boolean array to track the presence of each number (1-9)
        vector<bool> numPresence(10, false);

        // Check each element in the 3x3 subgrid
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                int num = grid[i][j];
                if (num < 1 || num > 9 || numPresence[num]) {
                    return false;
                }
                numPresence[num] = true;
            }
        }

        // Check if the sums of rows, columns, and diagonals are equal
        int targetSum = grid[startRow][startCol] + grid[startRow][startCol + 1] + grid[startRow][startCol + 2];
        for (int i = 0; i < 3; i++) {
            if (getRowSum(grid, startRow + i, startCol) != targetSum ||
                getColSum(grid, startRow, startCol + i) != targetSum) {
                return false;
            }
        }

        int diagonalSum1 = grid[startRow][startCol] + grid[startRow + 1][startCol + 1] + grid[startRow + 2][startCol + 2];
        int diagonalSum2 = grid[startRow + 2][startCol] + grid[startRow + 1][startCol + 1] + grid[startRow][startCol + 2];
        return diagonalSum1 == targetSum && diagonalSum2 == targetSum;
    }

    int getRowSum(const vector<vector<int>>& grid, int row, int startCol) {
        return grid[row][startCol] + grid[row][startCol + 1] + grid[row][startCol + 2];
    }

    int getColSum(const vector<vector<int>>& grid, int startRow, int col) {
        return grid[startRow][col] + grid[startRow + 1][col] + grid[startRow + 2][col];
    }
};