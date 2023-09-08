#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5;
    cout<< a <<endl;//5
    cout<< (++a)<<endl;// phele inc phir use
    cout<< (a++)<<endl;// phle use phir inc
    cout<< a <<endl; // 7 
    int k = 10;
    int b = ++k;
    cout<<b<<endl;
    cout<<k++ << endl;
    cout<<((++k)*(k++));//121
}

