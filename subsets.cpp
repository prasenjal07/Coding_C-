#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void combinations(int idx,int n,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    if(idx==n){
        ans.push_back(ds);
        return;
    }
    ds.push_back(arr[idx]);
    combinations(idx+1,n,arr,ds,ans);
    ds.pop_back();
    combinations(idx+1,n,arr,ds,ans);
}

vector<vector<int>>subsets(int arr[],int n){
    vector<vector<int>>ans;
    vector<int>ds;
    combinations(0,n,arr,ds,ans);
    return ans;
}

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    vector<vector<int>>v;
    v=subsets(arr,n);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}