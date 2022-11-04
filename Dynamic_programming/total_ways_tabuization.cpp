#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//stack space is reduced////
int countways(int m,int n){
    vector<vector<int>>dp(m,vector<int>(n,-1));
    dp[0][0]=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0)
            {
                dp[i][j]=1;
                continue;
            }
                int left=0;
                int up=0;
                if(i>=1)left=dp[i-1][j];
               
                if(j>=1)up=dp[i][j-1];

                dp[i][j]=left+up;
            
        }
    }
    return dp[m-1][n-1];
}
int main(){
    int m=3;
    int n=4;
    cout<<countways(m,n);
    return 0;
}