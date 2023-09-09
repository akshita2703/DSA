// Recursive function using single pointer ...
// Time Complexity - O(2^n)
#include<bits/stdc++.h>
using namespace std;

int fibbonacci(int n){
    if(n<=1){
        return n;
    }
    int last = fibbonacci(n-1);   // -- call comeback then n-2 call// first this function will call (n-1) and then second (n-2)   
    int slast = fibbonacci(n-2);
    return last+slast;
}

int main(){
    int n;
    cin>>n;
    cout<< fibbonacci(n);

}