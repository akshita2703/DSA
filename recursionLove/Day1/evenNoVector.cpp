#include <iostream>
#include <vector>
#include <map>

using namespace std;

void evenArr(int arr[] , int n ,int i , vector<int> &arr1){
    if(i>=n){
        return ;
    }
    if(arr[i]%2==0){
        arr1.push_back(arr[i]);
    }
    evenArr(arr,n,i+1,arr1);
}
int main(){
    vector<int> arr1;
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int i =0;
    evenArr(arr,n,i,arr1);
     for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

}