#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void function(int index,vector<int>&nums,vector<vector<int>>&ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return ;

        }
        for(int i = index; i<nums.size();i++){
           
            swap(nums[index],nums[i]);
            function(index+1,nums,ans);
            swap(nums[index],nums[i]);


        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        function(0,nums,ans);
        return ans;

        
    }
};

int main(){
    Solution ans;
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = ans.permute(nums);
    for( const vector<int>&ik : result){
        cout << "[";
        for (int num : ik) {
            cout << num << " ";
        }
        cout << "] , "  ;
    } 
}