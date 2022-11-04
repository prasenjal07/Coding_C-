#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void get_combinations(int idx,int target,int n,int arr[],vector<int>&ds,vector<vector<int>>&ans){
   
        if(target==0){
            ans.push_back(ds);
             return;
        }
       
    
    /*imp*/for(int i=idx;i<n;i++){
        if(arr[i]>target){
            break;
        }
/*imp*/if(i>idx&&arr[i]==arr[i-1]){
            continue;
        }
        ds.push_back(arr[i]);
        get_combinations(idx+1,target-arr[i],n,arr,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>>find_combination(int arr[],int sum,int n){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr,arr+n);
    get_combinations(0,sum,n,arr,ds,ans);
    return ans;
}

int main(){
    int arr[]={1,2,4,7};
    int sum=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>v;
    v=find_combination(arr,sum,n);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";

        }
        cout<<endl;
    }

    return 0;
}