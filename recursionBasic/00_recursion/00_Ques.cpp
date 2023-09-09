#include<bits/stdc++.h>
using namespace std;

void Fun(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Akshita Rastogi"<<endl;
    Fun(i+1,n);

}
int main(){
    int n ;
    cin>> n;
    Fun(1,n);
    
}
