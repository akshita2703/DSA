
//https://leetcode.com/problems/house-robber/
// memoization 

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int f(vector<int>& nums , int i ,  vector<int>&dp){
        if( i == 0){
            return nums[i];
        }
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int pick = nums[i] + f(nums , i-2 , dp );
        int NotPick = 0 + f(nums , i - 1 , dp);
        return dp[i] = max(pick , NotPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1 , -1);
        
        return f(nums , n-1 , dp);
        
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 9, 3, 1};
    int result = solution.rob(nums);
    cout << "Maximum amount that can be robbed is: " << result << endl;

    return 0;
}
