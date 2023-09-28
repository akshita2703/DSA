
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int ans =0;

    while(start <= end){
        int mid = (start + end )/2;
        // found 
        if (arr[mid]==target){
             ans = mid;
            if(arr[mid]==target){
               end = mid - 1;
            }
        }
        else if(arr[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
    } 
    return ans;
}

int firstOccurence(int arr[], int n, int target)
{
    
    int ans = binarySearch(arr,n,target);
    if(ans == target){
        binarySearch(arr,n,target);

    }
  
}

int main(){
    int arr[] = {10,20,30,30,30,30,70,80};
    int target = 30;
    int n = 8;
    int ansIndex = binarySearch(arr,n,target);
    cout<<ansIndex;
}