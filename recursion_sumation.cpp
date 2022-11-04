#include<iostream>
using namespace std;
 
int SumRe(int n){
    if(n==1){
        return 1;
    }
    int sumNet = n + SumRe(n-1);
    return sumNet;
}
int main(){
    int n;
    cin>>n;
    cout<<SumRe(n);
    return 0;
}