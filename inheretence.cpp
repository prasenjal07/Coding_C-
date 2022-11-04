#include<iostream>
using namespace std;
class A {
      public:
      void def(){
        cout<<"inherited A"<<endl;

      }

};
class B {
     public:
     void def2(){
        cout<<"inherited B"<<endl;
     }
};

class C : public A,public B{

};

int main(){
    C b;
    b.def();
    b.def2();
    return 0;
}