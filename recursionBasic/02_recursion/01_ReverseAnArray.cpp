#include<bits/stdc++.h>
using namespace std;
void fun(int l,int r,vector<int> &arr){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    fun(l+1,r-1,arr);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i =0; i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);

    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"Reversed Array"<<endl;
    fun(0,n-1 , arr);
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";

    }
}