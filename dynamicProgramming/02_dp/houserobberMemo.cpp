// tabulation without space optimization 

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
  

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1);

        dp[0] = 0;
        dp[1] = nums[0];
        int pick = 0;
        int notpick = 0;
        for(int i = 2 ; i<=n;i++){
            pick = nums[i-1]+dp[i-2];
            notpick = 0+ dp[i-1];
            dp[i] = max(pick,notpick);

        }
       
        return dp[n];  
        
    }
};
int main() {
    Solution solution;
    vector<int> nums = {2, 7, 9, 3, 1};
    int result = solution.rob(nums);
    cout << "Maximum amount that can be robbed is: " << result << endl;

    return 0;
}