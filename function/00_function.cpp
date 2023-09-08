// function to print your name 10 times
#include<bits/stdc++.h>
using namespace std;
 
 void printName(string Name){
    for(int i =0;i<10;i++){
        cout<<Name<<endl;
    }
 }
 
int main(){
    string Name;
    // cin>>Name; - only 1 word
    getline(cin,Name);
    printName(Name);
    return 0;
}
