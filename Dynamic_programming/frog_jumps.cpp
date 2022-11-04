#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//without DP
int solve(int n,int arr[],vector<int>&dp){
    if(n==0){
        return 0;
    }
    int subpath1=solve(n-1,arr,dp)+abs(arr[n]-arr[n-1]);
    int subpath2;
    if(n>1){
    subpath2=solve(n-2,arr,dp)+abs(arr[n]-arr[n-2]);
    }
    return min(subpath1,subpath2);
}

int main(){
    int arr[]={30,10,60,10,60,50};
    int n=5;
    //frog has to jump n stairs and energy required to jump each consecutive
    //stair is given in array format....frog can jump in set of 1 stair or 2 stairs
    //at a time.
    vector<int>dp(n+1,-1);
    cout<<solve(n,arr,dp);

    return 0;
}