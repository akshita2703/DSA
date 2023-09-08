// function to print sum of two numbers
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int Sum1(int a,int b){
   int AnsSum ;
   AnsSum = a+b;
   return AnsSum;
}
 
int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    cout << Sum1(num1,num2);
    return 0;
}
