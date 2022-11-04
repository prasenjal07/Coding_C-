#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void find(int idx,int target,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    int l=5;
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=idx;i<l;i++){
        if(i>idx && arr[i]==arr[i-1]){
            continue;
        }
        if(arr[i]>target){
            break;
        }
        ds.push_back(arr[i]);
        find(idx+1,target-arr[i],arr,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>>combination(int arr[],int n,int sum){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr,arr+n);
    find(0,sum,arr,ds,ans);
    return ans;
}

int main(){
int arr[]={1,1,1,2,2};
int n=5;
int sum=4;
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