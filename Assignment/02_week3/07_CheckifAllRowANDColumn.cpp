

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> matrix1(n, vector<int>(n, 0));
        vector<vector<int>> matrix2(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix1[i][matrix[i][j] - 1] = 1;
                matrix2[matrix[i][j] - 1][j] = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix1[i][j] != 1) {
                    return false;
                }
                if (matrix2[i][j] != 1) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<vector<int>> sudokuMatrix = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    bool isValid = solution.checkValid(sudokuMatrix);
    if (isValid) {
        cout << "The Sudoku matrix is valid." << endl;
    } else {
        cout << "The Sudoku matrix is not valid." << endl;
    }

    return 0;
}
