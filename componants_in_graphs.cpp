#include<iostream>
#include<vector>
using namespace std;

vector<int>componants;
vector<vector<int>>v2;
int get_comp(int i,vector<bool>&visited){
    if(visited[i]){
        return 0;
    }
    visited[i]=true;
    int ans = 1;
    for(auto k : v2[i]){
        if(!visited[k]){
            ans=ans+get_comp(k);
            visited[k]=true;
        }
    }

    return ans;
}

int main(){
    
    int m,n;
    cin>>m>>n;
    vector<bool>visited(n,false);
    v2=vector<vector<int>>(n,0);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v2[x].push_back(y);
        v2[y].push_back(x);
    }

    for(int i=0;i<n;i++){
       if(!visited[i]){
        componants.push_back(get_comp(i,visited));
       }
    }

    for(auto i: componants){
        cout<<i<<" ";
    }

    return 0;

}