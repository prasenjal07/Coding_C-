#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
   Complex(int x,int y);
   void printnums(){
       cout<<"the complex is as follows:"<<" "<<a<<"+"<<b<<"i"<<endl;
   }

};
Complex::Complex(int x,int y){
    a=x;
    b=y;
}
int main(){
    Complex randy(3,4);
    randy.printnums();
    Complex lavda = Complex(5,6);
    lavda.printnums();
    return 0;
}