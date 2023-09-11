#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr ; // vector of 0 size is declare of integer type  size - 0
    arr.push_back(1); // push_back - inserting the element            size - 1
    arr.push_back(10);                                                // size - 2  
    cout<<arr.capacity()<<endl;  // capacity - 2                                        
    arr.push_back(100);                                            // size - 3

    // each time size will be chnage to double
    cout<<arr.capacity();
}