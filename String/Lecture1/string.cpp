#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int findLength(char ch[],int size){
    int length =0;
    for(int i =0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}
void Replacech(char ch[]){
    int n = strlen(ch);
    for(int i =0; i<n;i++){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
    }
}

bool checkPali(char ch[]){
    int n = strlen(ch);
    int i =0,j= n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }

    }
    return true;
}
int main(){
    // char ch[100];
    // cin.getline(ch,100);
    // // cout<<"printing the value of ch:"<<ch<<endl;
    // // cout<< findLength(ch,100)<<endl;
    // cout<<ch<<endl;

    // cout<<"printing length :"<<strlen(ch)<<endl;
    // // inbuilt function
    // Replacech(ch);
    //  int n = strlen(ch);
    // // for(int i =0; i<n;i++){
    // //     cout<<ch[i];
    // // }
    // cout<<ch<<endl;
    // cout<<checkPali(ch);
    string name;
    getline(cin,name);
    cout<< name;
}
