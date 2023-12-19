#include <iostream>
using namespace std;

int partition(vector<int> nums,int l ,int r){
    int x = arr[r];
    int i = (l-1);
    for(int j = l;j<=r-1;j++){
        if(nums[j]<=x){
            i++;
            swap(nums[i],nums[j]);
        }
    }
    swap
}

void quickSort(vector<int> nums , int l , int r){
    if(l<r){
        int p = partition(nums,l,r);
        quickSort(nums,l,p-1);
        quickSort(nums,p,r);
    }
}

int main(){
    vector<int> nums = { 4,2,6,9,3};
    int n = 5;
    quickSort(nums , 0, n-1);
    for(int i =0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}