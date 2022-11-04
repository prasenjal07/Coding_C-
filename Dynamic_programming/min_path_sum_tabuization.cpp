#include<iostream>
#include<vector>
#include<cmath>
 
using namespace std;
//recursion stackspace is saved in the following logic using top dowm approach///

int min_path_sum(int m,int n,vector<vector<int>>grid){
    vector<vector<int>>dp(m,vector<int>(n,0));
    //dp[0][0]=grid[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0){
                dp[0][0]=grid[0][0];
            }
            else{
          int down=grid[i][j];
          if(i>0)down+=dp[i-1][j];
          else down+=INT16_MAX;
          int right=grid[i][j];
          if(j>0)right+=dp[i][j-1];
          else right+=INT16_MAX;

          dp[i][j]=min(down,right);
            }
        }
    }
    return dp[m-1][n-1];
}

int main(){
    vector<vector<int>>grid{{5,9,6},
                            {11,5,2}};

    int m=2;
    int n=3;
    cout<<min_path_sum(m,n,grid);

    return 0;
}