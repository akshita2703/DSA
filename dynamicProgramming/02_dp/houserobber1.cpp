//https://leetcode.com/problems/house-robber/
// tabulation - space optimaization

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1);

        int prev2 = 0;
        int prev1 = nums[0];
        int curri = nums[0];
        int pick = 0;
        int notpick = 0;
        for (int i = 2; i <= n; i++) {
            pick = nums[i - 1] + prev2;
            notpick = 0 + prev1;
            curri = max(pick, notpick);
            prev2 = prev1;
            prev1 = curri;
        }

        return curri;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 9, 3, 1};
    int result = solution.rob(nums);
    cout << "Maximum amount that can be robbed is: " << result << endl;

    return 0;
}
