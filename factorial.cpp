#include<iostream>
using namespace std;

int find_factorial(int n){
    if(n==1){
        return 1;
    }

    return n*find_factorial(n-1);
}

int main(){
    int n=5;
    cout<<find_factorial(n);
    return 0;
}