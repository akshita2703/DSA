

// print only 1 subsequence of given array


#include<bits/stdc++.h>
using namespace std;

bool printS(int index,vector<int> &ds, int s, int sum, int arr[],int n){
    if (index==n){
        if(s==sum){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        // condition not satisfied
        else {
            return false ;
        }

    }
    // pick
    ds.push_back(arr[index]);
    s += arr[index];
    if(printS(index+1, ds, s ,sum,arr,n) == true){
        return true;
    }
    s -= arr[index];
    ds.pop_back();
    //not pick
    if(printS(index+1,ds,s,sum,arr,n) == true) 
    {
        return true;
    }

    return false;
     
}


int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
    printS(0,ds,0,sum,arr,n);
    return 0;

}