// function to print sum of two numbers
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int Sum1(int a, int b , int c){
   int AnsSum ;
   AnsSum = a+b+c;
   return AnsSum;
}
 
int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    int num3;
    cin>>num3;
    cout << Sum1(num1,num2,num3);
    return 0;
}
