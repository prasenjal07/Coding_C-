#include<iostream>
#include<vector>
#include<algorithm>
//time complexity is reduced by addition of 1D DP array///
using namespace std;

int solve(int arr[],int n,vector<int>&dp){
    if(n==0){
        return 0;
    }
    if(dp[n-1]!=-1){
        int subroute1=dp[n-1]+abs(arr[n]-arr[n-1]);
    }
    int subroute1=solve(arr,n-1,dp)+abs(arr[n]-arr[n-1]);
    int subroute2;
    if(n>1){
        if(dp[n-2]!=-1){
            subroute2=dp[n-2]+abs(arr[n]-arr[n-2]);
        }
        subroute2=solve(arr,n-2,dp)+abs(arr[n]-arr[n-2]);
    }

    return dp[n]=min(subroute1,subroute2);
}

int main(){
    int arr[]={30,10,60,10,60,50};
    int n=5;
    vector<int>dp(n+1,-1);
    cout<<solve(arr,n,dp)<<endl;

    return 0;
}