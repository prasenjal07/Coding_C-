#include<iostream>
#include<vector>
//#include<stack>

using namespace std;

bool isCYCLE(int src,vector<vector<int>>&v1,vector<bool>&visited,vector<int>&stack){
    stack[src]=true;
    if(!visited[src]){
        visited[src]=true;
        for(auto i : v1[src]){
          if(!visited[i] && isCYCLE(i,v1,visited,stack)){
            return true;
          }
          if(stack[i]){
            return true;
          }
        }
    }
    stack[src]=false;
    return false;
}

int main(){
    int m,n;
    cin>>n>>m;
    
    vector<int>v(n,0);
    vector<vector<int>>v1(n,v);
    vector<bool>visited(n,false);


    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        //x--->y
        v1[x].push_back(y);
    }
    bool cycle = false;
    vector<int>stack(n,0);
    for(int i=0;i<n;i++){
    if(!visited[i]   &&   isCYCLE(i,v1,visited,stack)){
        cycle=true;
    }
    }

    if(cycle){
        cout<<"cycle is present"<<endl;
    }

    else{
        cout<<"cycle is not present"<<endl;
    }


    return 0;
}