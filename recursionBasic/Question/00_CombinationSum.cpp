#include <iostream>
#include <vector>
#include <algorithm> // For sorting

using namespace std;

class Solution {

    void combinationSum(int index, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
        if (index == arr.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }
        // Pick up the element 
        if (arr[index] <= target) {
            ds.push_back(arr[index]);
            combinationSum(index, target - arr[index], arr, ans, ds);
            ds.pop_back();
        }
        combinationSum(index + 1, target, arr, ans, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end()); // Sort the candidates to handle duplicates
        combinationSum(0, target, candidates, ans, ds);
        return ans;
    }
};

int main() {
    vector<int> candidates = {2,3,6,7};
    int target = 7;

    Solution solution;
    vector<vector<int>> result = solution.combinationSum(candidates, target);

    // Print the result
    for (const vector<int>& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
