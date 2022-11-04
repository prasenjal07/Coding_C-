#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//time optimised and brought back to O(n) time complexity//////
int solve(int arr[],int n,vector<int>&dp){
    if(n==0){
        return arr[0];
    }
    if(n<0){
        return 0;
    }
    int pick,not_pick;
    if(dp[n-2]!=-1)pick=arr[n]+dp[n-2];
     pick=arr[n]+solve(arr,n-2,dp);
    if(dp[n-1]!=-1)not_pick=dp[n-1];
     not_pick=solve(arr,n-1,dp);

    return dp[n]=max(pick,not_pick);
}

int main(){
    int arr[]={2,1,4,9};
    int n=3;
    vector<int>dp(n+1,-1);
    cout<<solve(arr,n,dp);
    return 0;
}