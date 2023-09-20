//https://leetcode.com/problems/subsets/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    void functionSubset(int index, std::vector<int> &nums, int n, std::vector<int> &ds, std::vector<std::vector<int>> &ans) {
        if (index >= n) {
            ans.push_back(ds);
            return;
        }
        functionSubset(index + 1, nums, n, ds, ans);
        // Pick
        ds.push_back(nums[index]);
        functionSubset(index + 1, nums, n, ds, ans);
        ds.pop_back();
    }

public:
    vector<vector<int>> subsets(std::vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int n = nums.size();
        functionSubset(0, nums, n, ds, ans);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.subsets(nums);

    cout << "Subsets of [1, 2, 3]:\n";
    for (const vector<int>& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << "";
        }
        cout << "]\n";
    }

    return 0;
}
