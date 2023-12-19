#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        arr = new int[size];
        this->size=size;
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"stack overflow";
            return;
        }
        
        top++;
        arr[top]=data;

    }
    void pop(){
        if(top==-1){
            cout<<"stack UnderFlow";
            return;
        }
        top--;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int getTop(){
        if(top==-1){
            cout<<"Stack empty";
            return 0;
        }
        return arr[top];
    }
    int getSize(){
        return top+1;
    }
    void print(){
        cout << " Stack :";
        for(int i =0;i<getSize();i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
        return ; 
    }

};

int main(){
    //creation
    Stack st(8);
    st.push(1);
    st.push(1);
    st.push(1);
    st.push(1);
    st.push(1);
    st.push(1);
    st.push(1);
    st.push(1);
    st.push(1);
    
   
    st.print();
   cout<< st.getSize();
   cout<< st.getTop();
   cout<<st.isEmpty();
    return 0;

}