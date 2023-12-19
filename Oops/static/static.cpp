#include<iostream>
using namespace std;

class abc{
    public:
   static int x,y;
   // kitne bhi instance (object )will point only one value of x and y
    /*static - no this pointer  is accesible */ 
    void print()  {
        // hidden parameter pass hota which is this pointer 
        cout<<x<<" "<<y<<endl;
    }

};
int abc::x;
int abc::y;

int main(){
    abc obj1 ;
    obj1.x=1;
    obj1.y=0;
    abc obj2 ;
    obj1.print();
    obj2.x=10;
    obj2.y=20;
    obj2.print();
    obj1.print();

    // it will change the value of x and y
    return 0;
}