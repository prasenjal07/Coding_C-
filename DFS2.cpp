#include<iostream>
#include<vector>
#include<algorithm>

const int N = 10e3+2;

using namespace std;

bool vis[N];
vector<int>v[N];

void DFS(int node){
    //inorder
    vis[node]=true;
    cout<<node<<endl;

    vector<int>::iterator  it;
    for(it=v[node].begin();it!=v[node].end();it++){
        if(vis[*it]){

        }
        else{
        DFS(*it);
        }
       
    }
}

int main(){
    for(int i=0;i<N;i++){
        vis[i]=false;
    }
    int m,n;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    DFS(1);

    return 0;
}