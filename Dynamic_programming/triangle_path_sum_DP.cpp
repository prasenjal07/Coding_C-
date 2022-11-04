#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int min_path_size(int i,int j,vector<vector<int>>path,int n,vector<vector<int>>&dp){
    if(i==n-1)return path[i][j];
    if(dp[i][j]!=-1)return dp[i][j];

    int down=path[i][j]+min_path_size(i+1,j,path,n,dp);
    int daigonal=path[i][j]+min_path_size(i+1,j+1,path,n,dp);

    return dp[i][j]=min(down,daigonal);
}

int main(){
    vector<vector<int>>path{{1},{2,3},{3,6,7},{8,9,6,10}};
    int n=path.size();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    cout<<min_path_size(0,0,path,n,dp);
    return 0;
}