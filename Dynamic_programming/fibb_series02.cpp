#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int recursive(int n,vector<int>&dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1)return dp[n];
    dp[n] = recursive(n-1,dp)+recursive(n-2,dp);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    recursive(n,dp);
    for(auto i:dp){
        cout<<i<<" ";
    }
    return 0;
}