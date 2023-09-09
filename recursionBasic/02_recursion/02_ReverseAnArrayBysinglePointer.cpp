
// Recursive function using single pointer ...

#include<bits/stdc++.h>
using namespace std;
void fun(int i , vector<int> &arr,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    fun(i+1 , arr,n);
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
    fun(0,arr,n);
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";

    }
}