#include<iostream>
#include<vector>
//1D dp problem 
using namespace std;

int solve(int n){
    if(n==0 || n==1){
        return 1;
    }

    int subpath1=solve(n-1);
    int subpath2=solve(n-2);

    return subpath1+subpath2;
}
int main(){
    int n;
    cin>>n;
    //find total no of ways to climb n stairs if you can jump in either
    //one stair or two stairs at a time,
    cout<<solve(n);

    return 0;

}