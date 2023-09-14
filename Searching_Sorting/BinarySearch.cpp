
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end )/2;
        // found 
        if (arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
    } 
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int target = 70;
    int n = 8;
    int ansIndex = binarySearch(arr,n,target);
    cout<<ansIndex;
}