#include<iostream>
#include<vector>
#include<algorithm>

using namespace  std;

void find_combination(int idx,int target,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    int k=4;
    if(idx==k){
        if(target==0) 
        {
        ans.push_back(ds);
        }
        return;
    }
    if(arr[idx]<=target){
        ds.push_back(arr[idx]);
        find_combination(idx,target-arr[idx],arr,ds,ans);
        ds.pop_back();
    }
    find_combination(idx+1,target,arr,ds,ans);
}

vector<vector<int>> find_combination_sum(int arr[],int n,int target){
    vector<vector<int>>ans;
    vector<int>ds;
    
    find_combination(0,target,arr,ds,ans);
    return ans;
}

int main(){
    int arr[]={2,3,6,7};
    int n = 4;
    int sum=7;
    //cout<<n<<endl;
    vector<vector<int>>v;
    v=find_combination_sum(arr,n,sum);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}