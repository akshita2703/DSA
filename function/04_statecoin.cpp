#include <iostream>
#include <vector>

using namespace std; // Add this to use the std namespace

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int res = nums[k];
        int mini = nums[k];
        int i = k;
        int j = k;
        int n = nums.size();
        while (i > 0 || j < n - 1) {
            if (i == 0) {
                j++;
            } else if (j == n - 1) {
                i--;
            } else if (nums[i - 1] < nums[j + 1]) {
                j++;
            } else {
                i--;
            }
            mini = min(mini, min(nums[i], nums[j]));
            res = max(res, mini * (j - i + 1));
        }

        return res;
    }
};

int main() {
    vector<int> nums = {1, 4, 3, 7, 4, 5};
    int k = 3;

    Solution solution;
    int result = solution.maximumScore(nums, k);

    cout << "Maximum Score: " << result << endl;

    return 0;
}
