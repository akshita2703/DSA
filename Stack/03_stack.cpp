#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st,int&ele){
    //basecase
    if(st.empty()){
        st.push(ele);
        return;
    }
    //1 case 
    int temp = st.top();
    st.pop();
    insertAtBottom(st,ele);
    //backtracking
    st.push(temp);
}
void reverseStack(stack<int>&st){
    //base case
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,temp);
}

void insertSorted(stack<int>&st, int ele){
    if(st.empty()||ele>st.top()){
        st.push(ele);
        return;
    }
    int temp = st.top();
    st.pop();
    insertSorted(st,ele);
    st.push(temp);
}
void sortStack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp =st.top();
    st.pop();

    sortStack(st);

    insertSorted(st,temp);
}


int main() {

  stack<int> st;
  st.push(10);
  st.push(7);
  st.push(12);
  st.push(5);
  st.push(11);


//   int element = 400;
//   insertAtBottom(st,element);

// without reverse: 
// 30 20 10 

//   reverseStack(st);
// //   with reverse: 
// //   10 20 30
  
//   cout << "with reverse: " << endl;
insertSorted(st,35);
//   sortStack(st);
  while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }


  return 0;
}