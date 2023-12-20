#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <char> st;
    string s = "helloo_Babyyy";
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    cout<<endl;
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}