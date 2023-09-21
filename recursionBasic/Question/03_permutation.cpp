#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
private:
    void fun(vector<vector<int>>&ans,vector<int>&nums,vector<int>&ds, int freq[] ){
        if(ds.size()== nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i =0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                fun(ans,nums,ds,freq);
                freq[i] = 0;
                ds.pop_back();
            }
           
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        int freq[n];
        for(int i =0;i<n;i++){
            freq[i] = 0;
        }
        fun(ans,nums,ds,freq);
        return ans;
        
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = solution.permute(nums);

    for (const vector<int>& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}