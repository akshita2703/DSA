// Find MAx
#include<bits/stdc++.h>
using namespace std;

int main(){
    // atleast you have give the column size , row is optional
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    int arr[3][4];
    for(int i =0; i<3;i++){
        for(int j = 0; j<4;j++ ){
            cin>>arr[i][j];
        }
    }
     for(int i =0; i<3;i++){
        for(int j = 0; j<4;j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int k = INT_MIN;
    // cout<<k; // check what is the value of INT_MIN
      for(int i =0; i<3;i++){
        for(int j = 0; j<4;j++ ){
            if(arr[i][j]>k){
                k = arr[i][j];
            }
            
        }
    }
    cout<<"Maximum Element "<<k;


}