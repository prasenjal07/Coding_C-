#include<iostream>
#include<vector>

using namespace std;

bool isCYCLE(int src,vector<vector<int>>&v1,vector<bool>&visited,int parent){
    visited[src]=true;
    for(auto  i: v1[src]){
        if(i!=parent){
            if(visited[i]=true){
                return true;
            }
            if(!visited[i]  &&  isCYCLE(i,v1,visited,src)){
                return true;
            }
        }
    }

    return false;

}

int main(){

    int n,m;
    cin>>n>>m;
    vector<int>v(n,0);
    vector<vector<int>>v1(n,v);
    vector<bool>visited(n,false);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        //since graph is undirected;
        v1[x].push_back(y);
        v1[y].push_back(x);
    }

    bool cycle=false;
    for(int i=0;i<n;i++){
        if(visited[i] && isCYCLE(i,v1,visited,-1)){
            cycle=true;
        }
    }

    if(cycle){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }

}