#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
//simple recursive solution
int path_sum_min(int i,int j,vector<vector<int>>path,int n){
    if(i==n-1)return path[i][j];

    int down=path[i][j]+path_sum_min(i+1,j,path,n);
    int down_left=path[i][j]+path_sum_min(i+1,j+1,path,n);
    
    return min(down,down_left);
}

int main(){
    vector<vector<int>>triangle{{1},{2,3},{3,6,7},{8,9,6,10}};
    int n=triangle.size();
    //int sum=0;
    cout<<path_sum_min(0,0,triangle,n);
    return 0;
}