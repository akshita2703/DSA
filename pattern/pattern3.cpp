#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0; i<n;i++){
        for(int j=0;j<i+3;j++){
            if(j == 0 || j == n-i){
                cout<< j+1;
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}

