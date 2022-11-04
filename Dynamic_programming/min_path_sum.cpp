#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;
//plain recursion is used in above problem//////
int min_sum_path(int m,int n,vector<vector<int>>grid){

    if(m==0 && n==0)return grid[0][0];
    if(m<0 || n<0)return INT16_MAX;

    int up=grid[m][n]+min_sum_path(m-1,n,grid);
    int left=grid[m][n]+min_sum_path(m,n-1,grid);

    return min(up,left);
}

int main(){
    vector<vector<int>>grid{{5,9,6},
                            {11,5,2}};
    int m=2;
    int n=3;
    cout<<min_sum_path(m-1,n-1,grid);

    return 0;
}