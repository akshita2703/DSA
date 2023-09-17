

#include<iostream>
using namespace std;


void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
}


int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int n =9;
    swapAlternate(arr,9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}