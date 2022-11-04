#include<iostream>
using namespace  std;

int main(){
    string s="diodiodisakdisakdisak";
    int n=s.length();
    for(int i=0;i<=n/2;i++){
        swap(s[i],s[n-1-i]);
    }

    for(auto i:s){
        cout<<i;
    }
    return 0;
}