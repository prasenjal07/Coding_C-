#include<iostream>
using namespace std;

class A{
     public:
     void def1(){
        cout<<"inherited from A"<<endl;
     }
};


class B : public A {
    public:
    void def2(){
        cout<<"inherited from B"<<endl;
    }

};

class C : public B{

};

int main(){
    C c;
    c.def1();
    c.def2();
    return 0;
}