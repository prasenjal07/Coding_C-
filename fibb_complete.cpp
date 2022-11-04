#include<iostream>
using namespace std;

int main(){
    int n1=0;
    int n2=1;
    int n3;

    int k=11;
    //cin>>k;
    cout<<0<<" "<<1<<" ";
    while(k-2){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        k--;
    }
    return 0;
}