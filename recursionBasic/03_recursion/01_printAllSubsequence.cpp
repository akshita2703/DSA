
// print all the subsequence of given array


#include<bits/stdc++.h>
using namespace std;

void printSub(int idx,vector<int> &ds,vector<int> &arr,int n){
    if(idx == n){
        for(auto it: ds){
            cout<<it<<" ";

        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<< endl;
        return ;
    }
    // not pick or not take the conditions, this element is not added to your subsequence

    printSub(idx+1,ds,arr,n);

    // take or pick the particular index into the subsequence 
    ds.push_back(arr[idx]);
    printSub(idx+1,ds,arr,n);
    ds.pop_back();

}

int main() {

    vector<int> arr;
    int n ;
    cin>>n;
    for(int i =0; i<n;i++){
        int k ;
        cin>>k;
        arr.push_back(k);
        
    }
    vector<int> ds;
    printSub(0,ds,arr,n);
    return 0;
}