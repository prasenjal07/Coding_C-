#include<iostream>

using namespace std;

int  print_fibb(int n){
    if(n==0 || n==1){
     return n;
    }
    return print_fibb(n-1)+print_fibb(n-2);
   
}
int main(){
   int n=11;
   cout<< print_fibb(n-1);
    return 0;
}