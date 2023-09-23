#include<bits/stdc++.h>
#include <utility>
using namespace std;


int bruteForce(vector<int>& nums){
    for(int i =0;i<nums.size();i++){
        int lsum = 0;
        int rsum = 0;
        // find lsum excluding current index
        for(int j = 0; j<i;++j){
            lsum +=nums[j];
        }
        //find rsum excluding current index;
        for(int j=i+1;j<nums.size();++j){
            rsum +=nums[j]; 
        }
        if(lsum == rsum)
        {
            return i;
        }
      

    }
    return -1;

}
int pivotIndex(vector<int>& nums){
    return bruteForce(nums);

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
