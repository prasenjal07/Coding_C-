#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void get_combination(int idx,int sum,int n,int arr[],vector<int>&ds,vector<vector<int>>&a,vector<int>&ans){
    if(idx==n){
        ans.push_back(sum);
        a.push_back(ds);
        return;
    }
    ds.push_back(arr[idx]);
    get_combination(idx+1,sum+arr[idx],n,arr,ds,a,ans);
    ds.pop_back();
    get_combination(idx+1,sum,n,arr,ds,a,ans);
}

vector<int>return_sumset(int arr[],int n){
    vector<int>ans;
    vector<vector<int>>a;
    vector<int>ds;
    get_combination(0,0,n,arr,ds,a,ans);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    v=return_sumset(arr,n);
    //vector<int>::iterator it;
    for(auto it=v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }

    return 0;
}