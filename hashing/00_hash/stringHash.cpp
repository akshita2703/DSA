#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    
    int hash[256]={0};
    for(int i =0;i<s.size();i++){
        hash[s[i]]++; //hash[-----]; hash inside need int
    }
    int q;
    cin>>q;
    while(q--){
        char n1;
        cin>>n1;
        cout<<hash[n1];

    }
}