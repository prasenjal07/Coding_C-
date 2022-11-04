#include<iostream>
#include<vector>
#include<vector>

using namespace std;

int countways(int m,int n){

    if(m==1 && n==1)return 1;
    if(m<1 || n<1)return 0;

    int up=countways(m-1,n);
    int left=countways(m,n-1);
    return up+left;
}
int main(){
    int m=3;
    int n=4;
    cout<<countways(m,n);
    return 0;
}