#include<bits/stdc++.h>
#include <utility>
using namespace std;

pair<int,int> keyPairsum(int arr[],int n, int X){

    pair<int,int> pair1;
    sort(arr,arr+n);
    int s = 0;
    int e = n-1;
    while(s<e){
        if(arr[s]+arr[e] == X){
            pair1.first = arr[s];
            pair1.second =arr[e];
            return pair1;
                
        }
        else if (arr[s]+arr[e] > X)
        {
            e--;
        }
        else{
            s++;
        }
    }
    return pair<int,int>(-1,-1);


}

int main(){

    int arr[6] = {1,4,45,6,10,8};
    int n = 6;
    int X = 16;
    
    pair<int, int> result = keyPairsum(arr, n, X);
    cout<<result.first<<" ";
    cout<<result.second;

}