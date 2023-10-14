#include <bits/stdc++.h>
#include<vector>
using namespace std;

int maxi(int arr[], int n, int i , int max){
   
    if(i>=n){
        return max;
    }
  
    if(max < arr[i]){
        max = arr[i];
    }
    return maxi(arr, n,i+1 , max);
    
}

int main(){
    int arr[10] ={1,2,3,4,56,0,7,8,9,99 };
    int n = 10;
    int i = 0;
     int max = INT_MIN;
   cout<< maxi(arr , n,i , max);

}