// RowWise Sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    // atleast you have give the column size , row is optional
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    int arr[3][4];
    int cnt = 0;
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

      for(int i =0; i<3;i++){
        int sum = 0;
        int colSum = 0;
        for(int j = 0; j<4;j++ ){
            sum = sum+ arr[i][j];
         
            

            
        }
        cout<<sum<<endl;
      
       
    }
   
 


}