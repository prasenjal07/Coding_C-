#include<iostream>
using namespace std;

int main(){
    int a;
    int *p;
    p=new int;
    p=10;
    cout<<p;
    delete p;
    p=new int[10];
    delete []p;
    return 0;
}