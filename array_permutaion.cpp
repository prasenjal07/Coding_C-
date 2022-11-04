#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void get_combinations(int idx,vector<int>&k,int n,vector<vector<int>>&ans){
if(idx==n){

ans.push_back(k);
return;

}

for(int i=idx;i<n;i++){
swap(k[i],k[idx]);
get_combinations(idx+1,k,n,ans);
swap(k[i],k[idx]);
}
}

vector<vector<int>>find_combinations(vector<int>k,int n){
    vector<vector<int>>ans;
    get_combinations(0,k,n,ans);
    return ans;
    
}

int main(){
    vector<int>k;
    k.push_back(1);
    k.push_back(2);
    k.push_back(3);
    int n=3;
    vector<vector<int>>v;
    v=find_combinations(k,n);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        
        }
        cout<<endl;
    }

    return 0;
}