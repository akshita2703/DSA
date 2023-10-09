#include <iostream>
#include <vector>
#include <map>

using namespace std;

int fact(int n ){
    if(n==1 || n==0){
        return 1;
    }
    int factorial = 1;
    factorial = n*fact(n-1);
    return factorial;
}

int main(){
    int n ;
    cin>>n;
   cout<< fact(n);
}