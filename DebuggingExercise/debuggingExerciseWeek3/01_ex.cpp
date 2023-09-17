
#include<iostream>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    int ans =-1;
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            ans = i;
        }
    }
    return ans;
}
int main(){
    int arr[5]= {67,34,35,1,2,};
    int n =5;
    int val = 67;
    cout<<linearSearch(arr,5,677);

}