

#include<bits/stdc++.h>
using namespace std;
void fun(int l,int r,int arr[]){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    fun(l+1,r-1,arr);
}

int main(){
    int n = 6;
    int arr[] = {1,5,6,78,93,56};
    fun(0,n-1,arr);
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";

    }
}