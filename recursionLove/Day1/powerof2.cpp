#include <iostream>
#include <vector>
#include <map>

using namespace std;

int powerof(int n){
    if( n==1){
        return 2;

    }
    int ans = 2*powerof(n-1);
    return ans;
}



int main(){
    int n ;
    cin>>n;
    cout<< powerof(n);
}