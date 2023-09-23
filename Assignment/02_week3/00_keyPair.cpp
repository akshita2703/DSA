#include<bits/stdc++.h>
#include <utility>
using namespace std;

pair<int,int> keyPairsum(int arr[],int n, int X){
    pair<int,int> pair1;
    for(int i =0; i<n;i++){
        for(int j = i+1; j<n;j++){
            if(arr[i]+arr[j] == X)
            {
                pair1.first = arr[i];
                pair1.second = arr[j];
                 return pair1;
                

            }
        }
    }
    return pair<int,int>(-1,-1);// Return a special pair when no pair is found
  
}

int main(){

    int arr[6] = {1,4,45,6,10,8};
    int n = 6;
    int X = 16;
    
    pair<int, int> result = keyPairsum(arr, n, X);
    cout<< result.first<<" ";
    cout<<result.second;

}
