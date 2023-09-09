
// print number 1 to N linearly from recursion 


#include<bits/stdc++.h>
using namespace std;

void fun(int i , int n){
    if(i>n) {return ;} 
    cout<< i << endl;;
    fun(++i,n);

}

int main(){
    int n ; 
    cin>>n;

    fun(1, n);

}