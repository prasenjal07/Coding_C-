#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//time complexicity is reduced from exponential to O(m*n)////
//now we can go for recursion stack space reduction/////
int solve(int p,int q,vector<vector<int>>&dp){
    if(p==0 && q==0)return 1;
    if(p<0 || q<0)return 0;
    if(dp[p][q]!=-1)return dp[p][q];

    int left=solve(p-1,q,dp);
    int up=solve(p,q-1,dp);

    return dp[p][q]=left+up;
}
int countways(int m,int n){
    vector<vector<int>>dp(m,vector<int>(n,-1));
    return solve(m-1,n-1,dp);
}
int main(){
    int m=3;
    int n=4;
    cout<<countways(m,n);
    return 0;
}