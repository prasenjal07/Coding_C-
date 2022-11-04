#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void find(int idx,int target,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    int n=4;
    if(idx==n){
        if(target==0){
            ans.push_back(ds);
        }

        return;
    }

    if(arr[idx]<=target){
    ds.push_back(arr[idx]);
    find(idx,target-arr[idx],arr,ds,ans);
    ds.pop_back();
    }
    find(idx+1,target,arr,ds,ans);
}

vector<vector<int>>combination(int arr[],int n,int  sum){
vector<vector<int>>ans;
vector<int>ds;
sort(arr,arr+n);
find(0,sum,arr,ds,ans);
return ans;
}
int main(){
    int arr[]={2,3,6,7};
    int n=4;
    int sum=7;
    vector<vector<int>>v;
    v=combination(arr,n,sum);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}