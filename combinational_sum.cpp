#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void find_combination(int index,int target,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    int n=5;
    for(int i=index;i<n-1;i++){
        if(i>index && arr[i]==arr[i-1]){
            continue;
        }
        if(arr[i]>target){
            break;
        }
        ds.push_back(arr[i]);
        find_combination(index+1,target-arr[i],arr,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>> find_combination_sum(int arr[],int n,int target){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr,arr+n);
    find_combination(0,target,arr,ds,ans);
    return ans;
}
int main(){
    int arr[]={1,1,1,2,2};
    int n=5;
    int sum=4;
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