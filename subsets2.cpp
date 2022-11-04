#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void get_subsets(int idx,int n,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    if(idx==n)
    {
        ans.push_back(ds);
        return;
    }

    ds.push_back(arr[idx]);
    get_subsets(idx+1,n,arr,ds,ans);
    ds.pop_back();
    get_subsets(idx+1,n,arr,ds,ans);
}

vector<vector<int>>find_subset(int arr[],int n){
    vector<vector<int>>ans;
    vector<int>ds;
    //sort(arr,arr+n);
    get_subsets(0,n,arr,ds,ans);
    return ans;
}

int main(){
    int arr[]={2,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>v;
    v=find_subset(arr,n);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //cout<<n<<" ";
    return 0;
}