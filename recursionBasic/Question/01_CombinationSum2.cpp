#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

class Solution {
    void findTheCombination(int idx, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1]) continue;
            if (arr[i] > target) break;
            ds.push_back(arr[i]);
            findTheCombination(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findTheCombination(0, target, candidates, ans, ds);
        return ans;
    }
};

int main() {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    Solution solution;
    vector<vector<int>> result = solution.combinationSum2(candidates, target);

    // Print the result
    for (const vector<int>& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
