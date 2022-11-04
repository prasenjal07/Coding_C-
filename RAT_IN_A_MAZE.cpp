#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

void solve(int i,int j,vector<vector<int>>m,int n,vector<string>&ans,string temp,vector<vector<int>>&vis){
    if(i==n-1 && j==n-1){
     ans.push_back(temp);
     return;
    }
    //for lexiographical order  >>>>  we must go in D>>L>>R>>U;
    //downwards (D)
    if(i+1<n && !vis[i+1][j] && m[i+1][j]==1){
     vis[i+1][j]=1;
     solve(i+1,j,m,n,ans,temp+'D',vis);
     vis[i+1][j]=0;
    }
    //leftwards(L)
    if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1){
        vis[i][j-1]=1;
        solve(i,j-1,m,m,ans,temp+'L',vis);\
        vis[i][j-1]=0;
    }
    //rightwards(R)
    if(j+1<n && !vis[i][j+1] && m[i][j+1]){
        vis[i][j+1]=1;
        solve(i,j+1,m,n,ans,temp+'R',vis);
        vis[i][j+1]=0;
    }
    //upwards(U)
    if(i-1>=0 && !vis[i-1][j] && m[i-1][j]){
        vis[i-1][j]=1;
        solve(i-1,j,m,n,ans,temp+'U',vis);
        vis[i-1][j]=0;
    }
}

vector<string>find_path(vector<vector<int>>m,int n){
  vector<string>ans;
  vector<vector<int>>visited(n,vector<int>(n,0));
  if(m[0][0]==1){
    solve(0,0,m,n,ans,"",visited);
  }
   return ans;
}

int main(){
    vector<vector<int>>m;
    int n=6;
    vector<string>v;
    v=find_path(m,n);
    
    return 0;
}