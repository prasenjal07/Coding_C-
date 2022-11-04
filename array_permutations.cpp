#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void get_combination(int  n,int arr[],int arrb[],vector<int>&ds,vector<vector<int>>&ans){
    if(ds.size()==n){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<n;i++){
    if(arrb[i]==0){
        arrb[i]=1;
        ds.push_back(arr[i]);
        get_combination(n,arr,arrb,ds,ans);
        ds.pop_back();
        arrb[i]=0;
    }
    }
    //get_combination(idx+1,n,arr,arrb,ds,ans);

}

vector<vector<int>>find_combinations(int arr[],int n){
    vector<vector<int>>ans;
    vector<int>ds;
    int arrb[n]={0};
    
    get_combination(n,arr,arrb,ds,ans);
    return ans;
}

int main(){
    int arr[]={1,2,3};
    int n=3;
    vector<vector<int>>v;
    v=find_combinations(arr,n);
    for(auto i:v){
        for(auto j:i){
             cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}