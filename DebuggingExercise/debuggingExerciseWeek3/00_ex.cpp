
#include<iostream>
using namespace std;

int main(){
    int n, sum;
    cin >> n;
    int *input = new int[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
=======
#include<iostream>
using namespace std;

int main(){
    int n, sum;
    cin >> n;
    int *input = new int[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;

}