#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> count1ans;
        int ans = 0;
        int index = 0;
        for (int i = 0; i < mat.size(); i++) {
            int count1 = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count1++;
                }
            }
            if (count1 > ans) {
                ans = count1;
                index = i;
            }
        }
        count1ans.push_back(index);
        count1ans.push_back(ans);
        return count1ans;
    }
};

int main() {
    Solution solution;

    // Example input matrix
    vector<vector<int>> matrix = {
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 1, 1},
        {1, 0, 1, 0, 0}
    };

    vector<int> result = solution.rowAndMaximumOnes(matrix);

    cout << "Row with the most ones: " << result[0] << endl;
    cout << "Number of ones in that row: " << result[1] << endl;

    return 0;
}
