// https://leetcode.com/problems/valid-sudoku/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int> row[9], col[9], blk[9];
        char c;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                c = board[i][j];
                if ((c != '.') && (0 < row[i][c]++ || 0 < col[j][c]++ || 0 < blk[i / 3 * 3 + j / 3][c]++))
                    return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    // Example Sudoku board (replace with your own board)
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    bool result = solution.isValidSudoku(board);

    if (result) {
        cout << "Valid Sudoku board." << endl;
    } else {
        cout << "Invalid Sudoku board." << endl;
    }

    return 0;
}
