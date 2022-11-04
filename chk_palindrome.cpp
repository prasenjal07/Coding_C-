#include<iostream>
using namespace std;


bool check_palindrome(int a){
    int k=a;
    int rem=0;
    while(k){
        int p=k%10;
        rem=rem*10+p;
        k=k/10;
        }

    if(rem==a){
        return true;
    }
    return false;
}
int main(){
    int a=112321;
    bool ans=check_palindrome(a);

    if(ans){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrome"<<endl;
    }
}