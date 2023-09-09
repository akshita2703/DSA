
// print number N to 1 linearly from recursion 


#include<bits/stdc++.h>
using namespace std;

void fun1(int n , int i){
    if(i>n) {return ;} 
    cout<< n << endl;;
    fun(--n,i);

}
void fun(int i , int n){
    if(i<1) {return ;} 
    cout<< i << endl;;
    fun(--i,n);

}


int main(){
    int n ; 
    cin>>n;
    fun1(n,i);
    fun(n,n);

}