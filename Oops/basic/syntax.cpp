// basic syntax of class
#include <iostream>
using namespace std;

class Student{
    int id;
    int age;
    string name;
    bool present;
    void study(){
        cout<<"Studying"<<" ";

    }
    void sleeping(){
        cout<<"sleeping"<<' ';
    }
    void cheating(){
        cout<<"Cheating"<<" ";
    }
}; 
int main(){
    cout<< sizeof(Student);
    Student s1;
    Student s2;
}