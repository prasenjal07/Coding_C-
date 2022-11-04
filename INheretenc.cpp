#include<iostream>
using namespace std;
class A {
      public:
      void def(){
        cout<<"inherited"<<endl;

      }

};
class B : public A{

};

int main(){
    B b;
    b.def();
    return 0;
}
