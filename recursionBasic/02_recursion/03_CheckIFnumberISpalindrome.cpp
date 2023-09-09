// using recursion check if number i s palindrome or not
// Recursive function using single pointer ...

#include<bits/stdc++.h>
using namespace std;
bool fun(int i,string n,int k ){
    if(i>=k/2){
        return true ;
    }
    if(n[i]!=n[k-i-1]){
        return false;
    }
    return fun(i+1 ,n,k);   
}

int main(){
    string n;
    cin>>n;
    int k = n.length();
    cout<<k<<endl;
    
    cout<< fun(0,n,k);
   
}