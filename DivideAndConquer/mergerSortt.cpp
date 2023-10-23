#include <iostream>
using namespace std;

void merge(int arr[] , int s ,int e){
    int mid = (s+e)/2;
    int lenLeft = mid - s+1;
    int lenRight = e-mid;
    // create left and right array
    int *left = new int[lenLeft];
    int *right = new int[lenRight];
    // copy value from original array to left array
    int k =s;
    // k -> starting index of left array
    for(int i =0; i<lenLeft;i++){
        left[i] = arr[k];
        k++;
    }
    // copy values from original array to right array
    k = mid+1;
    for(int i =0; i<lenRight;i++){
        right[i] = arr[k];
        k++;
    }
    // Merging Logic
    int Lidx = 0;
    int Ridx = 0;
    int mainArr = s;
    while(Lidx<lenLeft && Ridx<lenRight){
        if(left[Lidx]<right[Ridx]){
            arr[mainArr] = left[Lidx];
            mainArr++;
            Lidx++;
        }
        else{
            arr[mainArr] = right[Ridx];
            mainArr++;
            Ridx++;
        }
    }

    // 2 more cases
    //1 case -> left array exhaust but right array me element abhi bhi bache hai
	while(Ridx < lenRight) {
		arr[mainArr] =  right[Ridx];
		mainArr++;
		Ridx++;
	}
	

	//2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
	while(Lidx < lenLeft) {
		arr[mainArr] =  left[Lidx];
		mainArr++;
		Lidx++;
	}
    delete[] left;
	delete[] right;

}

void mergeSort(int arr[] , int s, int e){
    if(s>=e){
        return;
    
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

}
int main(){
    int arr[] = {4,7,12,5,9,6,8,11};
    int size = 8;
    int s = 0;
    int e = size - 1;
    cout<<"Before merge sort: "<<endl;
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";

    } 
    cout<<endl;
    mergeSort(arr,s,e);
    cout<<"After merge sort: "<<endl;
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";

    } 
    cout<<endl;

}