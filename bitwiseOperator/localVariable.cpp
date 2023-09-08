#include<bits/stdc++.h>
using namespace std;
int a = 29;
 int main(){
    int a = 5;
   // int a = 36 ; // you cannot redefine the variable 

   for(int i =0; i<2;i++){
    cout<< i <<endl;
    cout<<a<<endl;// global variale value for this loop
    int a = 6;// inside the loop we can reintialize the a  
    cout<< a<< endl;
   }
    // cout<< i ;
    // you cannoy acces i outside the loop because of the scope of is inside the loop
    cout<<a;
    // you can acces a outsiide the loop becaue of its is inside the scope of resolution
}
std::cout <<a;
 