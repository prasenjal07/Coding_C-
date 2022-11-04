#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int solve(int i,int j,vector<vector<int>>grid,vector<vector<int>>&dp){
if(i==0 && j==0)return grid[0][0];
if(i<0 || j<0)return INT16_MAX;
if(dp[i][j]!=-1)return dp[i][j];

int up=grid[i][j]+solve(i-1,j,grid,dp);
int left=grid[i][j]+solve(i,j-1,grid,dp);

return dp[i][j]=min(up,left);
}

int min_path_sum(int m,int n,vector<vector<int>>grid){
    vector<vector<int>>dp(m,vector<int>(n,-1));
    return solve(m-1,n-1,grid,dp);
}

int main(){
    vector<vector<int>>grid{{5,9,6},
                            {11,5,2}};
    int m=2;
    int n=3;
    cout<<min_path_sum(m,n,grid);

    return 0;
}