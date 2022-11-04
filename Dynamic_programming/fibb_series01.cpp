#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int recursive(int n){
    if(n<=1){
        return n;
    }
    return recursive(n-1)+recursive(n-2);
}
int main(){
    int n=6;
    cout<<recursive(n);
    return 0;
}