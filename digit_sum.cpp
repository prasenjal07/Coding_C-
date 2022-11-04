#include<iostream>
using namespace std;
void sum_digits(int a){
   
    int rem=0;
    if(rem/10 == 0 && rem!=0){
        return;
    }
    while(a/10 != 0){
    int b=a%10;
    rem+=b;
    a=a/10;
    }
    rem=rem+a;

    if(rem/10 != 0){
     sum_digits(rem);
    }
    
    cout<<"sum of digits is :"<<rem<<endl;
}
int main(){
    int a;
    cin>>a;
    sum_digits(a);
    return 0;
}