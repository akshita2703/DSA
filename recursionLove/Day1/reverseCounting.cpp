#include <iostream>
#include <vector>
#include <map>

using namespace std;

void revCount(int n){
    if( n == 0){
        cout<< 0 ;
        return ;

    }
    revCount(n-1); 
    cout<< n<<" ";
     // tail recursion - last line is function



}

int main(){
    int n ;
    cin>>n;
    revCount(n);
}