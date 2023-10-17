#include <bits/stdc++.h>
using namespace std;

int fun(int n ,  vector<int> &dp){
    if(n<3){
        return n;
    }
    if(sqrt(n)-floor(sqrt(n))==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int res = n;
    for(int i =1;i<sqrt(n)-1;i++){
        res = min(res, 1+fun(n-(i*i),dp));
    }
    return dp[n] = res ;
}

int main(){
    int x = 2222;
    vector<int> dp(x+1 , -1);
   
    cout<<fun(x , dp);
}