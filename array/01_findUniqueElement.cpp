

// Find unique Element in array


#include<bits/stdc++.h>
using namespace std;

int getUnique(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
    
}


int main(){
   int arr[]={1,2,3,4,3,2,1};
   int n =7;
   int finalAns=getUnique(arr,n);
   cout<<finalAns;
=======

// Find unique Element in array


#include<bits/stdc++.h>
using namespace std;

int getUnique(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
    
}


int main(){
   int arr[]={1,2,3,4,3,2,1};
   int n =7;
   int finalAns=getUnique(arr,n);
   cout<<finalAns;

}