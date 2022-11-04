#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void get_subset(int idx,int n,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=idx;i<n;i++){

        if(i!=idx && arr[i]==arr[i-1])continue;
        
        ds.push_back(arr[i]);
        get_subset(idx+1,n,arr,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>>find_subset(int arr[],int n){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr,arr+n);
    get_subset(0,n,arr,ds,ans);
    return ans;
}

int main(){
    int arr[]={1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>v;
    v=find_subset(arr,n);
    for(auto i:v){
        for(auto  j:i){
            cout<<j<<" ";
        
        }
        cout<<endl;
    }
    return 0;
}