#include<bits/stdc++.h>
using namespace std;

void sumFun(int i , int sum){
    if(i<1){
        cout<< sum;
        return;
    }
    sumFun(i-1,sum+i);
}

int main(){
    int sum =0;
    int n;
    cin>>n;
    sumFun(n,sum);

}