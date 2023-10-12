#include <iostream>
#include <vector>
#include <map>

using namespace std;
int fib(int n){
    int a = 0;
    int b = 1;
    if(n==0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibb = fib(n-1)+fib(n-2);
    return fibb;
}


int main(){
    int n ;
    cin>>n;
    cout<<fib(n);
}