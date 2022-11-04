#include<iostream>
using namespace std;
void GCD(int a,int b){
    int remainder;
    while(b!=0){
        remainder=a%b;
        a=b;
        b=remainder;
        }
        cout<<a<<endl;
}
int main(){
   GCD(27,30);
   return 0;

}