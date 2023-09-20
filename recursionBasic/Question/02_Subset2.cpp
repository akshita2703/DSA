#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void function(int index, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {

        ans.push_back(ds);
        for (int i = index; i < nums.size(); i++) {
            if (i != index && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            function(i + 1, nums, ds, ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        function(0, nums, ds, ans);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = solution.subsetsWithDup(nums);

    for (const vector<int>& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
