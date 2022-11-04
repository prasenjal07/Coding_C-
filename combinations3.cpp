#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void get_combinations(int idx,int target,int n,int arr[],vector<int>&ds,vector<vector<int>>&ans){
   if(idx==n){
    if(target==0){
        ans.push_back(ds);
    }
    return;
   }
   if(arr[idx]<=target){
    ds.push_back(arr[idx]);
    get_combinations(idx,target-arr[idx],n,arr,ds,ans);
    ds.pop_back();
   }
   get_combinations(idx+1,target,n,arr,ds,ans);
}

vector<vector<int>>find_combination(int arr[],int n,int sum){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr,arr+n);
    get_combinations(0,sum,n,arr,ds,ans);
    return ans;
}

int main(){
    int arr[]={1,2,3,7};
    int sum=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>v;
    v=find_combination(arr,n,sum);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return  0;
}