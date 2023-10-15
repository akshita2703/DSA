
// Recursion - it will give time limit exceed  error

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int f(vector<int>& nums, int i) {
        if (i == 0) {
            return nums[i];
        }
        if (i < 0) {
            return 0;
        }
        int pick = nums[i] + f(nums, i - 2);
        int notPick = 0 + f(nums, i - 1);
        return max(pick, notPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        return f(nums, n - 1);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 9, 3, 1};
    int result = solution.rob(nums);
    cout << "Maximum amount that can be robbed is: " << result << endl;

    return 0;
}
