#include<bits/stdc++.h>
#include <utility>
using namespace std;

int prefixSumApproach(vector<int>nums){
    vector<int> lsum(nums.size());
    vector<int> rsum(nums.size());
    // calculate lsum array
    for(int i = 1; i<nums.size();++i){
        lsum[i] = lsum[i-1]+nums[i-1];
    }
     // calculate rsum array
    for(int i = nums.size()-2;i>=0;--i){
        rsum[i] = rsum[i+1]+nums[i+1];
    }
    //check
    for(int i =0; i<nums.size();i++){
        if(lsum[i]==rsum[i]){
            return i;
        }
    }
    return -1;
}


int pivotIndex(vector<int>& nums){
    return prefixSumApproach(nums);

}
int main(){
     vector<int> nums = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(nums);
    
    if (result != -1) {
        cout << "Pivot index: " << result << endl;
    } else {
        cout << "No pivot index found." << endl;
    }

    return 0;
}
