
#include<iostream>
using namespace std;



void populate(int arr[],int n){
    int j=0;
    for(int i=0; i<n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
}


int main(){
    int arr[9];
    int n =9;
    populate(arr,9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}