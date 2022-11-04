#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(double (arr)[4][3],int n,int last,vector<vector<int>>&dp){
    if(n==0){
        int maxi=0;
        for(int i=0;i<=2;i++){
            if(i!=last){
                maxi=max(maxi,arr[0][i]);
            }
        }
        return maxi;
    }
    int maxx=0;
    for(int i=0;i<3;i++){
       
        if(i!=last){
            int ans=arr[n][i]+solve(arr,n-1,i,dp);
            maxx=max(maxx,ans);
        }
    }
    return maxx;
}

int main(){
    int arr[4][3]={{2,1,3},{3,4,6},{10,1,6},{8,3,7}};
    vector<vector<int>>dp(4,vector<int>(4,-1));
    for(auto i:dp){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //using zero indexing
    cout<<solve(arr,3,3,dp);
    return 0;
}