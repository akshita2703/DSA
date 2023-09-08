
// Concpet of pass by reference

// in case od array it automatically works as pass by reference 
// array k case m address bhjte h cpoy nhi banti 
#include<bits/stdc++.h>
using namespace std;

void solve(int &n){
    n=n*100;
    cout<<n<<" function"<<endl;
}


int main(){
    int n = 10;
      cout<<n<<endl;
    solve(n);
      cout<<n<<" main"<<endl;
}